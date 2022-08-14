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
    int diameterOfBinaryTree(TreeNode* root) {
        int maxResult = INT_MIN;
        int temp = maxPath(root, maxResult);
        return maxResult;
    }
    
    int maxPath(TreeNode* root, int &maxResult){
        if(!root)
            return 0;
        int left = maxPath(root-> left, maxResult);
        int right = maxPath(root-> right, maxResult);
        maxResult = max(maxResult, left + right);
        return 1 + max(left, right);
    }
};