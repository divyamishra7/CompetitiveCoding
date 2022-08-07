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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> result;
        queue<TreeNode*> q;
        if(!root)
            return result;
        q.push(root);
        int level = 0;
        while(!q.empty()){
            int size = q.size();
            vector<int> temp;
            for(int i = 0; i < size; i++){
                temp.push_back(q.front()-> val);
                
                if(q.front()-> left)
                    q.push(q.front()-> left);
                if(q.front()-> right)
                    q.push(q.front()-> right);
                q.pop();
                
            }
            level++;
            if(level%2 == 0)
                reverse(temp.begin(), temp.end());
            result.push_back(temp);
            
            
        }
        return result;
        
    }
};