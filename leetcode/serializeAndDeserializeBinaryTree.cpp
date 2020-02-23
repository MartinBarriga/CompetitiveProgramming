/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Codec {
public:
    
    // Encodes a tree to a single string.
    void traverseTree(TreeNode* node, string &serialized){
        if(node == NULL){
            serialized += 'n';
            return;
        }
        serialized +=  to_string(node->val) + ",";
        traverseTree(node->left, serialized);
        traverseTree(node->right, serialized);
    }
    
    string serialize(TreeNode* root) {
        string serialized = "";
        traverseTree(root, serialized);
        return serialized;
    }
    
    
    // Decodes your encoded data to tree.
    TreeNode* traverseString(int &index, string& data){
       if(data[index] == 'n' || index == data.size()){
            index++;
            return NULL;
        }
        string numInString = "";
        while(data[index] != ','){
            numInString += data[index];
            index++;
        }
        index++;
        int value = stoi(numInString);
        TreeNode* node = new TreeNode(value);
        node->left = traverseString(index, data);
        node->right = traverseString(index, data);
        return node;
    }
    TreeNode* deserialize(string data) {
        int index = 0;
        return traverseString(index, data); 
    }
};

// Your Codec object will be instantiated and called as such:
// Codec codec;
// codec.deserialize(codec.serialize(root));