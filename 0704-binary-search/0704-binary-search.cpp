class Solution {
public:
    
    int solve(vector<int>& nums, int target, int s , int e){
        if(s>e)return -1;
        int ans = -1;
        while(s<=e){
            int mid = s+(e-s)/2;
            
            if(nums[mid]== target)return mid;
           else  if(nums[mid]< target){
                s= mid+1;
            }
           else if(nums[mid]> target){
                e= mid-1;
            }
            else return -1;
        }
        return ans;
    }
    int search(vector<int>& nums, int target) {
        
        return solve(nums , target , 0 , nums.size()-1);
    }
};