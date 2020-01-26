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
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root == NULL) return NULL;
        if(root == p || root == q) return root;
        TreeNode *nodeInLeftSubTree = lowestCommonAncestor(root->left, p, q);
        TreeNode *nodeInRightSubTree = lowestCommonAncestor(root->right, p, q);
        if(nodeInLeftSubTree == NULL && nodeInRightSubTree == NULL) return NULL;
        if(nodeInLeftSubTree != NULL && nodeInRightSubTree != NULL){
            return root;
        }
        if(nodeInLeftSubTree == p || nodeInRightSubTree == p) return p;
        if(nodeInLeftSubTree == q || nodeInRightSubTree == q) return q;
        if(nodeInLeftSubTree != NULL) return nodeInLeftSubTree; 
        return nodeInRightSubTree;
    }
};