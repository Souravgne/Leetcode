class Solution {
public:
        void solve(int i , int j , int carry , string& ans , string num1 , string num2){
                if(i <0 && j<0 && carry == 0){
                        return  ;
                }
               int first = 0 ;
                int second = 0 ;
                if(i>=0){
                        first = num1[i]-'0';
                        
                }
                if(j>=0){
                        second = num2[j]-'0';
                }
              int sum = first + second + carry ;
                int lastdigit = sum%10;
                carry = sum/10;
                ans.push_back(lastdigit+'0');
                
                solve(i-1 , j -1 ,carry , ans , num1, num2 );
                
               
                
        }
        
        
        
        
        
        
        
    string addStrings(string num1, string num2) {
        int i = num1.size()-1;
        int j = num2.size()-1;
            int carry = 0 ; 
            string ans = "";
            solve(i , j , carry , ans , num1, num2);
            reverse(ans.begin() , ans.end()) ;
            return ans ;
    }
};