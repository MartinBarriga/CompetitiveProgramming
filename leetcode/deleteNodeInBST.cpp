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
    TreeNode* remove(TreeNode* node){
        if(node->left == NULL && node->right == NULL) return NULL;
        if(node->left == NULL) return node->right;
        if(node->right == NULL) return node->left;
        TreeNode* currentNode = node->left;
        while(currentNode->right != NULL){
            currentNode = currentNode->right;
        }
        currentNode->right = node->right;
        return node->left;
    }
    void traverse(TreeNode* node, int &key){
        if(node == NULL) return;
        if(node->left != NULL && node->left->val == key){
            cout << "about to rem " << node->left->val;
            node->left = remove(node->left); 
            return;
            
        }
        if(node->right != NULL && node->right->val == key){
            cout << "about to rem " << node->right->val;
            node->right = remove(node->right);
            return;
            
        }
        traverse(node->left, key);
        traverse(node->right, key);
        
    }
    TreeNode* deleteNode(TreeNode* root, int key) {
        if(root == NULL) return root;
        if(root->val == key){
            return remove(root);
        }
        traverse(root, key);
        return root;
    }
};