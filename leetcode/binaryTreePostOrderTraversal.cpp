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
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> answ;
        stack<TreeNode*> nodes;
        TreeNode* currentNode;
        TreeNode* left;
        TreeNode* right;
        if(root == NULL) return answ;
        nodes.push(root);
        while(!nodes.empty()){
            currentNode = nodes.top();
            nodes.pop();
            if(currentNode->left != NULL){
                left = currentNode->left;
                currentNode->left = NULL;
                nodes.push(currentNode);
                nodes.push(left);
            }
            else{
                if(currentNode->right != NULL){
                    right = currentNode->right;
                    currentNode->right = NULL;
                    nodes.push(currentNode);
                    nodes.push(right);
                }
                else{
                    answ.push_back(currentNode->val);
                }
            }
        }
        return answ;
    }
};