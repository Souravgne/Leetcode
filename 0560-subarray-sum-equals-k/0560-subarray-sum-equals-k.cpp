class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
            int ans=0;
        unordered_map<int, int> seen;
            seen[0]=1;
            int sum =0;
            for(int i =0;i<nums.size();i++){
                    sum += nums[i];
                    if(seen.count(sum-k)){
                          ans+= seen[sum-k];  
                    }
                    seen[sum]++;
            }
            return ans;
    }
};