class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        
        int n = -1;
        
        int maximum = INT_MIN;
        
        for(int i =0 ; i<nums.size();i++){
        if(nums[i] > maximum){
            maximum = nums[i];
            n = i;
        }
        }
        
        for(int i =0 ; i < nums.size();i++ ){
            if(2*nums[i] > maximum && nums[i] != maximum){
                return -1;
            }
            
        }
        
        return n ;
        
    }
};