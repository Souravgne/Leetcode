class Solution {
public:
    void sortColors(vector<int>& nums) {
        int i =0 , start =0 , end = nums.size()-1;
            while(i<=end){
                    if(nums[i]==0){
                            swap(nums[start] , nums[i]);
                            i++;
                            start++;
                    }
                    else if(nums[i]==2){
                            swap(nums[end], nums[i]);
                            end--;
                    }
                    else{i++;}
            }
    }
};