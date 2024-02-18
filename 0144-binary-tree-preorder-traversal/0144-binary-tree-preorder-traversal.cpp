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
    vector<int> preorder(TreeNode* root, vector<int> &ans){
        ans.push_back(root->val);
        if(root->left)  preorder(root->left, ans);
        if(root->right) preorder(root->right, ans);
        return ans;
    }
    
public:
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> ans;
        if(root == NULL)   return ans;
        return preorder(root, ans);
    }
};