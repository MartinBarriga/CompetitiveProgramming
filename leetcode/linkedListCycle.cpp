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
    bool hasCycle(ListNode *head) {
        if(head == NULL || head->next == NULL || head->next->next == NULL) return false;
        ListNode *before = head->next;
        ListNode *after = head->next->next;
        while(true){
            if(before == after) return true;
            before = before->next;
            if(after->next == NULL || after->next->next == NULL) return false;
            after = after->next->next;
        }
    }
};