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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> answ;
        vector<int> nodesPerLevel;
        queue<int> levels;
        queue<TreeNode*> nodes;
        nodes.push(root);
        bool leftToRight = true;
        levels.push(0);
        int currentLevel = 0;
        int currentNodeLevel;
        TreeNode* currentNode;
        if(root == NULL) return answ;
        while(!nodes.empty()){
            currentNode = nodes.front();
            nodes.pop();
            currentNodeLevel = levels.front();
            levels.pop();
            if(currentNodeLevel != currentLevel){
                if(!leftToRight) reverse(nodesPerLevel.begin(), nodesPerLevel.end());
                leftToRight = !leftToRight;
                answ.push_back(nodesPerLevel);
                nodesPerLevel.clear();            
                currentLevel++;
            }
            nodesPerLevel.push_back(currentNode->val);
            if(currentNode->left != NULL) {
                nodes.push(currentNode->left);
                levels.push(currentLevel+1);
            }
            if(currentNode->right != NULL) {
                nodes.push(currentNode->right);
                levels.push(currentLevel+1);
            }
        }
        if(!leftToRight) reverse(nodesPerLevel.begin(), nodesPerLevel.end());
        answ.push_back(nodesPerLevel);
        return answ;
    }
};