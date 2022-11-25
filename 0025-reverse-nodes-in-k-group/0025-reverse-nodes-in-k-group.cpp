/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
         int len=1;
void lenght(ListNode* head ){
       
       if(!head){
               ListNode* temp = head ;
               while(temp  != NULL){
                    len++;   
               }
       }
       
}
    ListNode* reverseKGroup(ListNode* head, int k) {
           ListNode* cursor = head;
        for(int i = 0; i < k; i++){
            if(cursor == nullptr) return head;
            cursor = cursor->next;
        }
            int count = 0 ;
           ListNode* prev = NULL;
           ListNode* curr = head ;
           ListNode* forward;
            while(curr != NULL && count <k){
                    forward = curr->next ;
                    curr->next = prev ;
                    prev = curr;
                    curr = forward;
                    count++;
            }
            
            if(forward != NULL ){
                
                          ListNode* ans = reverseKGroup(forward , k );
                    head ->next = ans;   
                   
                  
                   
            }
            else{
                    head ->next = forward;
            }
            return prev;
    }
};