class Solution {
public:
       void  reverse(vector<char>& a , int s  ,int e){
                if(s>= e)return;
               swap(a[s],a[e]);
               reverse(a,s+1,e-1);
                
        }
    void reverseString(vector<char>& s) {
        reverse(s , 0 , s.size()-1);
    }
};