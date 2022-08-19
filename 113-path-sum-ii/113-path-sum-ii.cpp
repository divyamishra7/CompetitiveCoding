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
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>> result;
        vector<int> temp;
        if(!root)
            return result;
        helper(root, targetSum - root->val, result, temp);
        return result;
    }
    void helper(TreeNode* root, int targetSum, vector<vector<int>> &result, vector<int> &temp){
        temp.push_back(root->val);
        if(!(root->left) && !(root->right)){
            if(targetSum==0){
                result.push_back(temp);
                
            }
            temp.pop_back();
            return;
        }
        if(root->left)
            helper(root->left, targetSum-root->left->val, result, temp);
        if(root->right)
            helper(root->right, targetSum-root->right->val, result, temp);
        temp.pop_back();
    }
};

