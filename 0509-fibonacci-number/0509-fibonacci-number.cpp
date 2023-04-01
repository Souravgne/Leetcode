class Solution {
public:
    
    int fibonacii(int n , vector<int>& ans){
        if(n<=1)return n;
        if(ans[n]!=-1)return ans[n];
        ans[n] = fibonacii(n-1 , ans) +fibonacii(n-2 , ans);
        return ans[n];
    }
    int fib(int n) {
        if(n==1 || n==0)return n;
        vector<int> ans(n+1);
        for(int i =0 ; i<=n ; i++){
            ans[i]= -1;
        }
        return fibonacii(n , ans);
    }
};