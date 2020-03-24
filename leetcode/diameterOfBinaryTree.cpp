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
    int longestPath;
    int getGreatestPath(TreeNode *node){
        if(node == NULL) return 0;
        int leftLength = getGreatestPath(node->left);
        int rightLength = getGreatestPath(node->right);
        int currentDiameter = leftLength + rightLength;
        if(currentDiameter > longestPath) longestPath = currentDiameter;
        return max(leftLength, rightLength) + 1;
    }
    int diameterOfBinaryTree(TreeNode* root) {
        longestPath = 0;
        getGreatestPath(root);   
        return longestPath;
    }
};