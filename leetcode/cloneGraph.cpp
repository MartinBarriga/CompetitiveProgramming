/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/
class Solution {
public:
    unordered_map<Node*,Node*> seenNodes;
    Node* cloneGraph(Node* node) {
       if(node == NULL) return node;
        auto nodeIterator = seenNodes.find(node);
        if(nodeIterator != seenNodes.end()) return (*nodeIterator).second;
        Node *copy = new Node(node->val);
        seenNodes[node] = copy;
        for(int index = 0; index < node->neighbors.size(); index++){
            Node *currentNeighbor = node->neighbors[index];
            copy->neighbors.push_back(cloneGraph(currentNeighbor));
        }
        return copy;
    }
};