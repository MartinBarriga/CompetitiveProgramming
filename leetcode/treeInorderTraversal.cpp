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
    vector<int> inorderTraversal(TreeNode* root) {
        stack<TreeNode*> nodes;
        vector<int> answ;
        TreeNode* currentNode;
        TreeNode* leftNode;
        TreeNode* rightNode;
        if(root == NULL) return answ;
        nodes.push(root);
        while(!nodes.empty()){
            currentNode = nodes.top();
            nodes.pop();
            if(currentNode->left != NULL){
                leftNode = currentNode->left;
                currentNode->left = NULL;
                nodes.push(currentNode);
                nodes.push(leftNode);
            }
            else{
                answ.push_back(currentNode->val);
                if(currentNode->right != NULL){
                    rightNode =currentNode->right;
                    nodes.push(rightNode);
                }
            }
        }
        return answ;
    }
};