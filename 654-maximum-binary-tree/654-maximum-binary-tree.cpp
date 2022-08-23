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
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        return helper(nums, 0, nums.size()-1);
        
    }
    TreeNode* helper(vector<int>& nums, int start, int end){
        if(start > end)
            return NULL;
        TreeNode *temp;
        int maxx = nums[start];
        int maxIndex = start;
        
        for(int i = start; i <= end; i++){
            if(maxx < nums[i]){
                maxx = nums[i];
                maxIndex = i;
            }   
        }
        //cout<<maxx;
        //temp -> val = maxx;
        temp = new TreeNode(maxx);
        if(maxIndex > 0)
            temp -> left = helper(nums, start, maxIndex - 1);
        if(maxIndex < end)
            temp -> right = helper(nums, maxIndex + 1, end);
        return temp;
    }
};
