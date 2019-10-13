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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int sum, carry = 0;
        ListNode *sumList = new ListNode(0);
        ListNode *last = sumList; 
        while(l1 != NULL || l2 != NULL){
            sum = 0;
            if(l1 != NULL) {
                sum += l1->val;
                l1 = l1->next;
            
            }
            if(l2 != NULL){
                sum += l2->val;
                l2 = l2->next;
            } 
            sum += carry;
            if(sum >= 10){
                carry = 1;
                sum %= 10;
            }
            else{
                carry = 0;
            }
            ListNode *current = new ListNode(sum);
            last->next = current;
            last = current;
        }
        if(carry == 1) {
            ListNode *current = new ListNode(1);
            last->next = current;
        }
        return sumList->next;
    }
};