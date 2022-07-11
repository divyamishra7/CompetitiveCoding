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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        // cout<< "pp";
        // preorder(p);
        // cout<< "pq";
        // preorder(q);
        // cout<< "ip";
        // inorder(p);
        // cout<< "iq";
        // inorder(q);

        if(preorder(p) == preorder(q) && inorder(p) == inorder(q))
            return true;
        else
            return false;
        
    }
    
    //preorder
    vector<int> preorder(TreeNode* a){
        vector<int> preorder;
        preorderHelper(a, preorder);
        return preorder;
        
    }
    
    void preorderHelper(TreeNode* a, vector<int> &preorder){
        ;
        if(a==NULL){
            preorder.push_back(INT_MAX);
            return;
        }
        preorder.push_back(a-> val);
        //cout<<a->val;
        preorderHelper(a->left, preorder);
        preorderHelper(a->right, preorder);
        return;
        
    }
    //inorder
    vector<int> inorder(TreeNode* a){
        vector<int> inorder;
        inorderHelper(a, inorder);
        return inorder;
        
    }

    void inorderHelper(TreeNode* a, vector<int> &inorder){
        if(a==NULL){
            inorder.push_back(INT_MAX);
            return;
        }
        inorderHelper(a->left, inorder);        
        inorder.push_back(a-> val);
        //cout<<a->val;
        inorderHelper(a->right, inorder);
        return;
        
    }
    
    
    
    
    
};