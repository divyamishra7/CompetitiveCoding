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
    int widthOfBinaryTree(TreeNode* root) {
        if (!root) return 0;
        int maxWidth = 0;
        queue<pair<TreeNode*,long int>> q;
        q.push(make_pair(root,1));
        
        while(!q.empty()){
            
            int size = q.size();
            int start = q.front().second;
            int end = start;
            
            for(int i = 0; i < size; i++){
                end = q.front().second;
                if(q.front().first->left)
                    q.push(make_pair(q.front().first->left, 2LL * end - start));
                    
                if(q.front().first->right)
                    q.push(make_pair(q.front().first->right, (2LL * end) + 1 - start));
                    
                q.pop();
                    
                }
                int width = end - start + 1;
                maxWidth = max(width, maxWidth);
        }
        return maxWidth;
        
   }
    // int widthOfBinaryTree(TreeNode* root) {
    //     if (!root) return 0;
    //     int max = 0;
    //     queue<pair<TreeNode*, int>> q;
    //     q.push(pair<TreeNode*, int>(root, 1));
    //     while (!q.empty()) {
    //         int l = q.front().second, r = l; // right started same as left
    //         for (int i = 0, n = q.size(); i < n; i++) {
    //             TreeNode* node = q.front().first;
    //             r = q.front().second;
    //             q.pop();
    //             if (node->left) q.push(pair<TreeNode*, int>(node->left, r * 2));
    //             if (node->right) q.push(pair<TreeNode*, int>(node->right, r * 2 + 1));
    //         }
    //         max = std::max(max, r + 1 - l);
    //     }
    //     return max;
    // }
};


//
 