class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
            int n = nums.size();
            int left = INT_MAX;
            int mid = INT_MAX;
        if(n<3)return false;
                
                for(int i =0 ; i< n; i++){
                        if(nums[i]> mid)return true;
if(nums[i] < left)left = nums[i];
                        if(nums[i] > left)mid = nums[i];
                
                }
                
        
            return false;
    }
};