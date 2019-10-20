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
    vector<vector<int>> levelOrder(TreeNode* root) {
        queue<TreeNode*> nodes;
        vector<vector<int>> answ;
        vector<int>row;
        TreeNode* currentNode;
        int nextLevelChilds = 0;
        int currentLevelChilds = 1;
        if(root == NULL) return answ;
        nodes.push(root);
        while(!nodes.empty()){
            currentNode = nodes.front();
            nodes.pop();
            currentLevelChilds--;
            if(currentNode->left != NULL){
                nodes.push(currentNode->left);
                nextLevelChilds++;
            }
            if(currentNode->right != NULL){
                nodes.push(currentNode->right);
                nextLevelChilds++;
            }
            row.push_back(currentNode->val);
            if(currentLevelChilds == 0){
                currentLevelChilds = nextLevelChilds;
                nextLevelChilds = 0;
                answ.push_back(row);
                row.clear();
            }
        }
        return answ;
    }
};