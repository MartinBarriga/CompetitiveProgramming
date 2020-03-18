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
    bool traverse(TreeNode* node, int mini, int maxi, bool miniExists, bool maxiExists){
        if(node == NULL) return true;
        //cout << node->val << " min: " << mini << " max: " << maxi << endl;
        if((miniExists && node->val <= mini) || (maxiExists && node->val >= maxi)) return false;
        if(!traverse(node->left, mini, node->val, miniExists, true)) return false;
        
        if(!traverse(node->right, node->val, maxi, true, maxiExists)) return false;
        return true;
    }
    bool isValidBST(TreeNode* root) {
        return traverse(root, INT_MAX, INT_MIN, false, false);
    }
};