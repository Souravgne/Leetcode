class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        vector<int> ans;
            unordered_map<int,int> seen;
           
           for(auto x:arr){
                   seen[x]++;
           }
            unordered_set<int> mp;
            for(auto x:seen){
                    mp.insert(x.second);
            }
            return seen.size()==mp.size();
    }
};