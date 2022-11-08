
class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
   if(head == NULL || head ->next == NULL)return head;
            int count =1;
            ListNode* a = head;
            while(a->next != NULL){
                    a = a->next ;
                    count++;
            }
        k=k%count;
            while(k>0){ 
            ListNode* temp = head ;
            ListNode* prev = NULL;
            while(temp->next  != NULL){
                    prev = temp ;
                    temp = temp ->next;
            }
            ListNode* rotate = prev ->next ;
            prev->next = NULL;
            rotate ->next = head;
            head = rotate ;
                    k--;
            }
            
            
            
            return head;
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
    }
};