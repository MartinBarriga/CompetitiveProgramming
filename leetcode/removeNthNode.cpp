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
    int recursion(ListNode* node, int indexToRemove){
        if(node == NULL) return 1;
        else{
            int myIndex = recursion(node->next, indexToRemove);
            if(myIndex == INT_MIN) return INT_MIN;
            if(myIndex-1 == indexToRemove){
                node->next = node->next->next; 
                return INT_MIN;
            }
            return myIndex+1;
        }
    }
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head == NULL) return head;
        int nodeNumber = recursion(head, n);  
        if(nodeNumber > 0) head = head->next;
        return head;
    }
};