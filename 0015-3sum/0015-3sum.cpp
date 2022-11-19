class Solution {
public:
        vector<vector<int>> ans;
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin() , nums.end());
        for(int i = 0; i< nums.size(); i++){
                if(i ==0 || nums[i] != nums[i-1]){
                        twosum(i+1 , nums.size()-1 , nums, 0-nums[i]);
                }
               
        }
             return ans;
    }
            void twosum(int i, int j , vector<int>& nums , int target){
                    int a = nums[i-1];
                    while(i<j){
                            if(nums[i]+nums[j]> target) j--;
                            else if( nums[i]+nums[j]<target)i++;
                            else{
                                    vector<int> arr;
                                    arr.push_back(a);
                                    arr.push_back(nums[i]);
                                    arr.push_back(nums[j]);
                                    while(i<j && nums[i] == nums[i+1])i++;
                                    while(i<j && nums[j] == nums[j-1])j--;
                                    
                                    i++ ; j--;
                                    ans.push_back(arr);
                            }
                    }
            }
    
};