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
    int deepestLeavesSum(TreeNode* root) {
        vector<vector<int>> levels;
        queue<TreeNode*> q;
        q.push(root);
        int level = 0;
        while(!q.empty()){
            int size = q.size();
            vector<int> temp;
            for(int i = 0; i < size; i++){
                temp.push_back(q.front()->val);
                if(q.front()->left)
                    q.push(q.front()->left);
                if(q.front()->right)
                    q.push(q.front()->right);
                q.pop();
            }
            levels.push_back(temp);
            level++;
        }
        //cout<<levels[level-1].size();
        int sum = 0;
        for(int i = 0; i < levels[level-1].size();i++ ){
            sum = sum + levels[level-1][i];
        }
        return sum;
        
    }
};