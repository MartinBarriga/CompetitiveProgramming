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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        ListNode *minNode;
        ListNode *currentNode;
        ListNode *sortedList;
        ListNode *newNodeOnSortedList;
        ListNode *headOfSortedList = NULL;
        int minIndex;
        bool isThisFirstNode = true;
        bool haventSeenValidList;
        while(!lists.empty()){
            haventSeenValidList = true;
            for(int index = 0; index < lists.size(); index++){
                if(lists[index] == NULL){
                    continue;
                }
                if(haventSeenValidList){                  
                    haventSeenValidList = false;
                    minNode = lists[index];
                    minIndex = index;
                }
                else{
                    currentNode = lists[index];
                    if(currentNode->val < minNode->val){
                        minNode = currentNode;
                        minIndex = index;
                    }
                }
            }
            if(haventSeenValidList) break;
            newNodeOnSortedList = minNode;
            minNode = minNode->next;
            newNodeOnSortedList->next = NULL;
            if(isThisFirstNode){
                isThisFirstNode = false;
                sortedList = newNodeOnSortedList;
                headOfSortedList = sortedList;
            }
            else{
                sortedList->next = newNodeOnSortedList;
                sortedList = sortedList->next;
            }
            lists[minIndex] = minNode; 
            if(minNode == NULL) lists.erase(lists.begin() + minIndex);
        }
        return headOfSortedList;
    }
};