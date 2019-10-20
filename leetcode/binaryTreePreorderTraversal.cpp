/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> answ;
        stack<TreeNode*> myNodes;
        if(root == NULL) return answ;
        myNodes.push(root);
        TreeNode* currentNode;
        while(!myNodes.empty()){
            currentNode = myNodes.top();
            myNodes.pop();
            answ.push_back(currentNode->val);
            if(currentNode->right != NULL){
                myNodes.push(currentNode->right);
            }
            if(currentNode->left != NULL){
                myNodes.push(currentNode->left);
            }
        }
        return answ;
    }
};