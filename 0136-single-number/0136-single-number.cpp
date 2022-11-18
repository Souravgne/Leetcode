class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int , int > seen ;
            int ans =0;
            int n = nums.size();
      for(int i =0 ; i <nums.size();i++){
              seen[nums[i]]++;
      }
            for(int i =0 ; i< n ; i++){
                    if(seen[nums[i]]== 1) ans = nums[i];
            }
            return ans ;
            
    }
};