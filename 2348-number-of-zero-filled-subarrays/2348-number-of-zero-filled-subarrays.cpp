class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        long long ans =0 ,n =0 ;
        // int n= nums.size()-1;
        
        for(auto i : nums){
            if(i==0){n++;}
            else{
                ans+=n*(n+1)/2;
                n=0;
            }
            
           
        }
        if(n>0)                ans+=n*(n+1)/2;
return ans;
        
    }
};