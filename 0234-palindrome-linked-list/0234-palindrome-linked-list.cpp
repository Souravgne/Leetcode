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
        
        ListNode* reverse(ListNode* head){
                ListNode* prev = NULL;
                ListNode* curr = head;
                ListNode* nxt = NULL;
                while(curr){
                nxt = curr ->next;
                curr ->next = prev;
                prev = curr;
                curr = nxt;
                
                }
                return prev;
             
        }
    bool isPalindrome(ListNode* head) {
        ListNode* slow = head ;
        ListNode* fast = head ->next ;
        while(fast && fast ->next){
                slow = slow ->next;
                fast = fast->next ->next;
        }
            ListNode* second = reverse(slow->next);
            slow->next = NULL;
            ListNode* first = head ;
            while(second){
                    if(first->val != second ->val){
                            return false;
                    }
                    else{
                            first = first->next;
                            second = second ->next;
                    }
                    
            }
            return true;
    }
};