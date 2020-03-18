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
    vector<int> rightSideView(TreeNode* root) {
        vector<int> answ;
        queue<TreeNode*> nodes;
        TreeNode* currentNode;
        int currentSeenNodes = 0, expectedInCurrentLevel = 1, expectedInNextLevel = 0;
        if(root == NULL) return answ;
        nodes.push(root);
        while(!nodes.empty()){
            currentNode = nodes.front();
            nodes.pop();
            currentSeenNodes++;
            if(currentNode->left!= NULL) {
                nodes.push(currentNode->left);
                expectedInNextLevel++;
            }
            if(currentNode->right!= NULL){
                nodes.push(currentNode->right);
                expectedInNextLevel++;
            }
            if(currentSeenNodes == expectedInCurrentLevel){
                answ.push_back(currentNode->val);
                expectedInCurrentLevel =  expectedInNextLevel;
                expectedInNextLevel = 0;
                currentSeenNodes = 0;
            }
        }
        return answ;
    }
};