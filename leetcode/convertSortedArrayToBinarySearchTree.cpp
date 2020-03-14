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
    TreeNode* createBST(int left, int right, vector<int>& nums){
        if(left > right) return NULL;
        int mid = left + (right-left)/2;
        TreeNode* newNode = new TreeNode(nums[mid]);
        newNode->left = createBST(left, mid-1, nums);
        newNode->right = createBST(mid+1, right, nums);
        return newNode;
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return createBST(0, nums.size()-1, nums);
    }
};