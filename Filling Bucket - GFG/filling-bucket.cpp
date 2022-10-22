//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
  int mod = 1e8;
  int solve(int N , vector<int>& ans){
      if(N<0)return 0;
      if(N== 0)return 1;
      if(ans[N]!=-1)return ans[N];
      return ans[N]=(solve(N-1, ans)+solve(N-2,ans))%mod;
  }
    int fillingBucket(int N) {
    vector<int> ans(N+1 , -1);
    return solve(N, ans);
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;

        Solution ob;
        cout << ob.fillingBucket(N) << endl;
    }
    return 0;
}
// } Driver Code Ends