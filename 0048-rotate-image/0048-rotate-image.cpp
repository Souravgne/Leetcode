class Solution {
public:
    void rotate(vector<vector<int>>& nums) {
        int n =nums.size();
            
            
            for(int i =0 ; i<nums.size();i++){
                    for(int j =i ; j<nums[i].size();j++){
                           swap(nums[i][j] , nums[j][i]);
                          
                    }
                    
            }
            for(int i =0 ; i<n;i++){
                     reverse(nums[i].begin() , nums[i].end());
            }
             
            
           
    }
};