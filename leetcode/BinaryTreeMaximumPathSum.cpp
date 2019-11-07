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
    int maxSum;
    int getMaxPath(TreeNode* currentNode){
        if(currentNode == NULL) return 0;
        int leftChild = getMaxPath(currentNode->left);
        int rightChild = getMaxPath(currentNode->right);
        int LRC = leftChild + rightChild + currentNode->val;
        int LC = leftChild + currentNode->val;
        int RC = rightChild + currentNode->val;
        int currentSum = max(max(max(currentNode->val, LC), RC), LRC);
        if( currentSum > maxSum ) maxSum = currentSum;
        return max(max(currentNode->val, LC), RC);
        
    }
    int maxPathSum(TreeNode* root) {
        maxSum = INT_MIN;
        getMaxPath(root);
        return maxSum;
    }
};