class Solution {
public:
    double myPow(double x, int n) {
        if(n==0 )return 1;
            if(n==1)return x;
            // if(n==-2147483648) return x;
            if(n<0){
                return    1/x* myPow(1/x, -(n+1));
            }
           long double ans = myPow(x, n/2);
            if(n%2==0){
                    
                 return  ans*ans;
            }
            else{
                  return    x*ans*ans;
            }
    }
};