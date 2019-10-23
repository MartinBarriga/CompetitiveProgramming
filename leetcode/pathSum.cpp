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
    bool recursion(TreeNode* node, int currentSum, int sum){
        if(node->left == NULL && node->right == NULL){
            if(currentSum + node->val == sum) return true;
            return false;
        }
        if(node->left != NULL && recursion(node->left, currentSum+ node->val, sum)) return true;
        if(node->right != NULL && recursion(node->right, currentSum + node->val, sum)) return true;
        return false;
    }
    bool hasPathSum(TreeNode* root, int sum) {
        if(root == NULL) return false;
        return recursion(root, 0, sum);
    }
};