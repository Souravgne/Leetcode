class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
            if(k==0|| k ==1)return 0;
        int i =0 ; 
         int j =0 ;
            int ans =0;
         int currentpro =1;
            int n =nums.size();
            while(i<n){
                    currentpro*= nums[i];
                    while(currentpro>=k){
                            currentpro /= nums[j];
                            j++;
                    }
                    ans += i-j+1;
                    i++;
            }
            return ans;
    }
};