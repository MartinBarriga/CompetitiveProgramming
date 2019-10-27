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
    int numberOfSubtrees;
    bool hasSubTree(TreeNode* node){
        if(node->right == NULL && node->left == NULL) {
            numberOfSubtrees++;
            return true;
        }
        bool isLeftSubtreeAndHasSameVal = false;
        bool isRightSubtreeAndHasSameVal = false;
        if((node->left != NULL && hasSubTree(node->left) && node->left->val == node->val) || node->left == NULL){
            isLeftSubtreeAndHasSameVal = true;
        }
        if((node->right != NULL && hasSubTree(node->right) && node->right->val == node->val) || node->right == NULL){
            isRightSubtreeAndHasSameVal = true;
        }
        if(isLeftSubtreeAndHasSameVal && isRightSubtreeAndHasSameVal) {
            numberOfSubtrees++;
            return true;
        }
        return false;
    }
    int countUnivalSubtrees(TreeNode* root) {
        if(root == NULL) return 0;
        numberOfSubtrees = 0;
        hasSubTree(root);
        return numberOfSubtrees;
    }
};