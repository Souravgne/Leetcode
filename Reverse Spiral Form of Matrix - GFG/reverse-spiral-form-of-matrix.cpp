//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    vector<int> reverseSpiral(int R, int C, vector<vector<int>>&a)  {
        
        vector<int> ans;
        if(R==0)return ans;
        int l =0 , r = C-1 , t=0 , b = R-1, d =0;
        while(l<=r && t<=b){
            if(d==0){
                for(int i = l ; i<=r;i++){
                    ans.push_back(a[t][i]);
                }
              d=1 , t++;  
            }
            else if(d==1){
                for(int i = t ; i<= b; i++){
                    ans.push_back(a[i][r]);
                }
                d=2 , r--;
            }
            else if(d==2){
                for(int i =r ; i>=l;i--){
                    ans.push_back(a[b][i]);
                }
                d=3,b--;
                
            }
            else if(d==3){
                for(int i = b ; i>=t ; i--){
                    ans.push_back(a[i][l]);
                }
                d=0 , l++;
            }
        }
        reverse(ans.rbegin() , ans.rend());
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int R, C;
        cin>>R>>C;
        vector<vector<int>> a(R, vector<int>(C, 0));
        for(int i = 0;i < R*C;i++)
            cin>>a[i/C][i%C];
        Solution ob;
        vector<int>ans=ob.reverseSpiral(R,C,a);
        for(int i=0;i<ans.size();i++)cout<<ans[i]<<" ";
            cout<<endl;
    }
    return 0;
}

// } Driver Code Ends