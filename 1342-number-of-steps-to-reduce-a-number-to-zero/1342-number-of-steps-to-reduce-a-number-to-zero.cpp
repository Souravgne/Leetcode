class Solution {
public:
    int numberOfSteps(int num) {
        int steps =0 ; 
        if(num<=1)return num;
        
        if(num%2==0){
           steps += numberOfSteps(num/2)+1;
        }
        else{
            steps += numberOfSteps(num-1)+1;
        }
        return steps;
    }
};