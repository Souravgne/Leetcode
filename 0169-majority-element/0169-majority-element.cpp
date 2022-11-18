class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> seen;
            int ans=0;
            for(int i =0 ; i < nums.size();i++){
                    seen[nums[i]]++;
            }
            for(int i =0 ; i<nums.size();i++){
                    double n = nums.size()/2;
                    if(seen[nums[i]] > n){
                            ans = nums[i];
                    }
            }
            return ans;
    }
};