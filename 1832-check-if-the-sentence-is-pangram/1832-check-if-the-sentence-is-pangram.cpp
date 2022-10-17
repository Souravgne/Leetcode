class Solution {
public:
    bool checkIfPangram(string s) {
            int n = s.size()-1;
            
for(int i =0 ; i<26;i++){
        char ch = 'a'+i;
       if(s.find(ch)== string::npos){
               return false;
       }
}            
        return true;    
    }
};