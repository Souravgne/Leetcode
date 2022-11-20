class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& nums) {
            sort(nums.begin(), nums.end());
        vector<vector<int>> ans;
            for(int i =0 ; i<nums.size();i++){
                if(ans.empty()){
                        ans.push_back(nums[i]);
                        
                }
                    else{
                            vector<int>& v = ans.back();
                            int y = v[1];
                            if(nums[i][0]<=y){
                                    v[1]= max(y,nums[i][1]);
                            }
                            else{
                                    ans.push_back(nums[i]);
                            }
                    }
            }
            return ans;
    }
};