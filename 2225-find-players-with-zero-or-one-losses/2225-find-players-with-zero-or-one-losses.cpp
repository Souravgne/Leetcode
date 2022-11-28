class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& nums) {
        unordered_map<int, int> seen;
            vector<vector<int>> ans ;
            vector<int> ans1;
            vector<int> ans2;
            for(int i =0 ; i< nums.size();i++){
                    seen[nums[i][1]]++;
            }
            
            for(int i =0 ; i < nums.size();i++){
                    if(seen.count(nums[i][0])==0){
                            ans1.push_back(nums[i][0]) ;
                            seen[nums[i][0]]++;
                    }
                 
            }
            for(int i =0 ; i< nums.size(); i++){
                       if(seen[nums[i][1]]==1){
                            ans2.push_back(nums[i][1]);
                    }
            }
            sort(ans1.begin(), ans1.end());
            sort(ans2.begin(), ans2.end());

            ans.push_back(ans1);
            ans.push_back(ans2);
            return ans;
    }
};