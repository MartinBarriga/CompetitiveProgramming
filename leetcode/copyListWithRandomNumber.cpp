/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;

    Node() {}

    Node(int _val, Node* _next, Node* _random) {
        val = _val;
        next = _next;
        random = _random;
    }
};
*/
class Solution {
public:
    Node* copyRandomList(Node* head) {
        Node* currentNode = head;
        Node* copyListHead= new Node(0, NULL, NULL);
        Node* currentCopyNode = copyListHead;
        map<Node*, Node*> visitedNodes;
        while(currentNode != NULL){
            Node* newCopyNode = new Node(currentNode->val, NULL, NULL);
            currentCopyNode->next = newCopyNode;
            currentCopyNode = currentCopyNode->next;
            visitedNodes[currentNode] = currentCopyNode;
            currentNode = currentNode->next;
        }
        copyListHead = copyListHead->next;
        currentCopyNode = copyListHead;
        currentNode = head;
        while(currentNode != NULL){
            if(currentNode->random != NULL){
                currentCopyNode->random = visitedNodes[currentNode->random];
            }
            currentCopyNode = currentCopyNode->next;
            currentNode = currentNode->next;
        }
        return copyListHead;
    }
};