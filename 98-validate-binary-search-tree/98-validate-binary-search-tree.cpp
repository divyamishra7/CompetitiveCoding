/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    
    bool isValidBST(TreeNode* root) {
        vector<int> inord;
        inorder(root, inord);
        for(int i = 0; i < inord.size()-1; i++){
            if(inord[i] >= inord[i+1])
                return false;
            
        }
        return true;
    }
    void inorder(TreeNode* root, vector<int> &inord){
        if(!root)
            return;
        if(root -> left)
            inorder(root->left, inord);
        inord.push_back(root->val);
        if(root -> right)
            inorder(root->right, inord);
        
    }
};