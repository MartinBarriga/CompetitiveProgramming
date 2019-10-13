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
    ListNode* reverseList(ListNode* head) {
        if(head == NULL)  return head;
        ListNode *current = head;
        ListNode *prev = NULL;
        ListNode *next = NULL;
        while(current != NULL){
            next = current->next;
            current->next = prev;
            prev = current;
            current = next;
        }
        return prev;
        
    }
};