class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int current_element = prices[0];
        int current_profit =0 ;
        int overall_profit =0 ;
            
         for(int i =1 ; i< prices.size(); i++){
                 if(current_element> prices[i]){
                current_element = prices[i];
                 }
                 else{
                         current_profit = abs(current_element - prices[i]);
                 }
                 if(current_profit > overall_profit){
                         overall_profit = current_profit;
                 }
         }
            return overall_profit;
    }
};