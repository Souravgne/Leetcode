class Solution {
public:
    int strStr(string s1, string s2) {
            int ans = -1;
        for(int i =0 ; i < s1.size(); i++){
                if(s1[i] == s2[0]){
                        if(s1.substr(i , s2.size()) == s2){
                                return i ;
                        }
                }
        }
          return -1; 
    }
};