class Solution {
public:
    
//     int solve(int n , vector<int> &dp , vector<int>& cost){
        
//         if(n==0)return cost[0];
//         if(n==1)return cost[1];
        
//         if(dp[n]!=-1)return dp[n];
        
//         dp[n]= min(solve(n-1,dp, cost) , solve(n-2,dp,cost))+cost[n];
//         return dp[n];
//     }
    
    int solve2(int n , vector<int>& cost){
        vector<int> dp(n+1);
        dp[0]=cost[0];
        dp[1]=cost[1];
        
        for(int i =2;i<n;i++){
            dp[i]= cost[i]+min(dp[i-1], dp[i-2]);
        }
        return min(dp[n-1], dp[n-2]);
        
        
    }
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        // vector<int> dp(n+1,-1);
        // return min(solve2(n-1, cost) , solve2(n-2,cost));
        return solve2(n,cost);
        
    }
};