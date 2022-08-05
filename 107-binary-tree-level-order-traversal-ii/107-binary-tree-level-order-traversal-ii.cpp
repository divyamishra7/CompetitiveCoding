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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>> result;
        queue<TreeNode*> q;
        if(!root)
            return result;
        q.push(root);
        while(!q.empty()){
            int size = q.size();
            vector<int> temp;
            for(int i = 0; i< size; i++){
                temp.push_back(q.front() -> val);
                if(q.front() -> left)
                    q.push(q.front() -> left);
                if(q.front() -> right)
                    q.push(q.front() -> right);
                q.pop();
            }
            result.push_back(temp);
        }
        reverse(result.begin(), result.end());
        return result;
        
    }
};
