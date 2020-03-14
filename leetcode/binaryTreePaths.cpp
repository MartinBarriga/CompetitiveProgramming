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
    void traverse(TreeNode *node, string currentPath, vector<string>& paths){
        currentPath += to_string(node->val);
        if(node->right == NULL && node->left == NULL){
            paths.push_back(currentPath);
        }
        currentPath += "->";
        if(node->right != NULL){
            traverse(node->right, currentPath, paths);
        }
        if(node->left != NULL){
            traverse(node->left, currentPath, paths);
        }
        
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> paths;
        if(root != NULL) traverse(root, "", paths);
        return paths;
    }
};