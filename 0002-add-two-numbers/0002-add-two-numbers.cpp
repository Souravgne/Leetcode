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
        ListNode* reverse(ListNode*& head){
              ListNode* prev = NULL;
                ListNode* curr = head;
                ListNode* next;
                while(curr!= NULL){
                        next = curr->next;
                        curr->next = prev;
                        prev = curr;
                        curr = next;
                }
                return prev;
        }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
      
      ListNode* ans = NULL;
            ListNode* temp = NULL;
      ListNode* t1= l1;
            ListNode* t2 = l2;
            int carry =0 ; 
            while(t1!=NULL &t2!=NULL){
                    int a = (t1->val +t2->val)+carry;
                    ListNode* b= new ListNode(a%10);
                    carry = a/10;
                    if(ans== NULL){
                            ans = b;
                            temp = ans;
                    }
                    else{
                            ans->next = b;
                            ans= ans ->next;
                    }
                    t1= t1->next;
                    t2= t2->next;
                    
            }
            while(t1!=NULL){
                int a = t1->val +carry;
                 ListNode* b = new ListNode(a%10);
                    carry = a/10;
                     if(ans== NULL){
                            ans = b;
                            temp = ans;
                    }
                    else{
                            ans->next = b;
                            ans= ans ->next;
                    }
                    t1= t1->next;
                    
            }
             while(t2!=NULL){
                int a = t2->val +carry;
                 ListNode* b = new ListNode(a%10);
                    carry = a/10;
                     if(ans== NULL){
                            ans = b;
                            temp = ans;
                    }
                    else{
                            ans->next = b;
                            ans= ans ->next;
                    }
                    t2= t2->next;
                    
            }
            if(carry != 0 ){
                    ListNode* b = new ListNode(carry);
                    ans->next = b;
            }
            return temp;
        
             
    }
};