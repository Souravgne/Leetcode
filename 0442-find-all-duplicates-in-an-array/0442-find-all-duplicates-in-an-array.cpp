class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        
        vector<int> ans;
        
        for(int i =0 ; i< nums.size(); i++){
           if(nums[abs(nums[i])-1] < 0)
               ans.push_back(abs(nums[i]));
               nums[abs(nums[i])-1]=-nums[abs(nums[i])-1];
        }
        return ans;
                // most optimised 
        // using hashmap O(1) and O(n)
        
        // unordered_map<int , int> map;
        // vector<int> ans;
        // for(int i =0 ; i< nums.size();i++){
        //     if(map.count(nums[i])>=1){
        //         ans.push_back(nums[i]);
        //     }
        //     else{
        //         map[nums[i]]++;
        //     }
        // }
        // return ans;
        
        
        
        
    }
};