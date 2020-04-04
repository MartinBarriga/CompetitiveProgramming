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
    TreeNode* flat(TreeNode* root){
        if(root == NULL) return NULL;
        TreeNode* lastLeft = flat(root->left);
        TreeNode* lastRight = flat(root->right);
        if(root->left != NULL && root->right != NULL){
            lastLeft->right = root->right;
            root->right = root->left;
            root->left = NULL;
            return lastRight;
        }
        if(root->left != NULL){
            root->right = root->left;
            root->left = NULL;
            return lastLeft;
        }
        if(root->right != NULL){
            return lastRight;
        }
        
        return root;
    }
    void flatten(TreeNode* root) {
        flat(root);
        
    }
};