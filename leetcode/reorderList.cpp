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
    ListNode* begin;
    bool finished;
    void traverse(ListNode* last){
        if(last == NULL) return;
        traverse(last->next);
        if(finished) return;
        if(begin == last){
            finished = true;
            last->next = NULL;
        }
        else{
            ListNode* next = begin->next;
            begin->next = last;
            if(last != next){
                last->next = next;
                begin = next;
            }
            else{
                last->next = NULL;
                finished = true;
            }
        }
    }
    void reorderList(ListNode* head) {
        finished = false;
        begin = head;
        traverse(head);
    }
};