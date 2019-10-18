/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        if(head == NULL || head->next == NULL) return true;
        ListNode* slow = head;
        ListNode* slowPrev = NULL;
        ListNode* slowNext = NULL;
        bool pair;
        ListNode* fast = head->next;
        while(true){
            if(fast == NULL){
                pair = false;
                break;
            }
            if(fast->next == NULL){
                pair = true;
                slowNext = slow->next;
                slow->next = slowPrev;
                slowPrev = slow;
                slow = slowNext;   
                break;
            }
            fast = fast->next->next;
            slowNext = slow->next;
            slow->next = slowPrev;
            slowPrev = slow;
            slow = slowNext;    
        }
        ListNode* first = slowPrev;
        ListNode* second = slow;
        if(pair == false){
            second = second->next;   
        }
        while(first != NULL && second != NULL){
            if(first->val != second->val) return false;
            first = first->next;
            second = second->next;
        }
        if(first == NULL && second == NULL) return true;
        return false;
    }
};