class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        
        int i =0 , j =1 ,count=0; 
        while(j<nums.size()){
            
         if(nums[i]==val && nums[j]!=val){
             swap(nums[i] ,nums[j]);
             i++;j++;
         }
            else if(nums[i]==val&& nums[j]==val){
                j++;
            }
            else{
               i++; j++;
            }
            
        }
         for(int k =0 ; k< nums.size();k++){
          if(nums[k]!= val)
              count++;}
        
       return count; 
    }
    
    
};