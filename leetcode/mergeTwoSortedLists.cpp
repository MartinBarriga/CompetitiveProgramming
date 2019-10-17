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
    ListNode* min(ListNode*& l1, ListNode*& l2){
        ListNode *smallestNode;
        if(l1 != NULL && l2 != NULL){
            if(l1->val < l2->val){
                smallestNode = l1;
                l1 = l1->next;
                return smallestNode;
            }
            smallestNode = l2;
            l2 = l2->next;
            return smallestNode;
        }
        if(l1 != NULL){ 
            smallestNode = l1;
            l1 = l1->next;
            return smallestNode;
        }
        
        if(l2 != NULL){
            smallestNode = l2;
            l2 = l2->next;
            return smallestNode;
        }
        return NULL;
    }
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode* l3;
        l3 = min(l1, l2);
        ListNode* currentl3 = l3;
        while(currentl3 != NULL){
            currentl3->next = min(l1, l2);
            currentl3 = currentl3->next;
        }
        return l3;
    }
};