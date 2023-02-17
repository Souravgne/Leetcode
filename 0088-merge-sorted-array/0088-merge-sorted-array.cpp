class Solution {
public:
    void merge(vector<int>& nums, int m, vector<int>& arr, int n) {
        
        vector<int> ans;
        int i=0 ,j=0;
        while(i<m&& j<n){
            if(nums[i]<arr[j]){
                ans.push_back(nums[i]);
                i++;
            }else{
                ans.push_back(arr[j]);
                j++;
            }
            
        }
        
        while(i<m){
            ans.push_back(nums[i]);
            i++;
        }
         while(j<n){
            ans.push_back(arr[j]);
            j++;
        }
        
        for(int i =0 ;i<ans.size();i++){
            nums[i]=ans[i];
        }
    }
};