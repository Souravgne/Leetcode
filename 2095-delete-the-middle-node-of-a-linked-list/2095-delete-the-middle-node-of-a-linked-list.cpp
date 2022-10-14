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
    ListNode* deleteMiddle(ListNode* head) {
          int count =0;
            ListNode* temp = head;
            while(temp ){
                count++;
                    temp = temp->next;
            }
            if(count == 1)return NULL;
            temp = head;
            int i =0;
                while(i<count/2-1){
                temp = temp ->next;
                        i++;
                }
            
            // if(temp ->next && temp){
                     temp ->next = temp ->next ->next;
            
            // }
           
            return head;
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
//         ListNode* prev= NULL;
//         ListNode* slow = head;
//         ListNode* fast = head ->next;
//             while(fast && fast ->next){
//                 prev = slow ;
//                  slow = slow ->next ;
//                  fast = fast->next ->next;
//             }
            
//             prev ->next = prev ->next ->next ;
//             return head;
            
            
            
    }
};