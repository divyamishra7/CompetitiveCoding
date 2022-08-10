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
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        int size = nums.size();
        return makeBST(nums, 0, size-1);
        
    }
    TreeNode* makeBST(vector<int>& nums, int left, int right){
        int mid = (left + right)/2;
        if((right<left) || (left > right)){
            return NULL;
        }
        TreeNode *root = new TreeNode(nums[mid]);
        root -> left = makeBST(nums, left, mid-1);
        root -> right = makeBST(nums,mid+1, right);
        return root;
    }
    
    
};