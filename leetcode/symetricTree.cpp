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
    bool recursion(TreeNode* left, TreeNode* right){
        if(left == NULL && right == NULL) return true;
        if(left != NULL && right != NULL){
            if(left->val == right->val){
                return recursion(left->left, right->right) && recursion (left->right, right->left);
            }
            else return false;
        }
        else return false;
    }
    bool isSymmetric(TreeNode* root) {
        if(root == NULL) return true;
        return recursion(root->left, root->right);    
    }
};