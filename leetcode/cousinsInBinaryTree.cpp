/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void getDepth(TreeNode* currentNode, int currentDepth, int parent, unordered_map<int,pair<int,int>> &nodesDepth){
        if(currentNode == NULL) return;
        nodesDepth[currentNode->val] = make_pair(currentDepth, parent);
        getDepth(currentNode->left, currentDepth + 1, currentNode->val, nodesDepth);
        getDepth(currentNode->right, currentDepth + 1, currentNode->val, nodesDepth);
    }
    bool isCousins(TreeNode* root, int x, int y) {
        unordered_map<int, pair<int,int>> nodesDepth;
        getDepth(root, 0, -1, nodesDepth);
        if(nodesDepth[x].first == nodesDepth[y].first && nodesDepth[x].second != nodesDepth[y].second) return true;
        return false;
    }
};