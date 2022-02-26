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
    bool recursion(TreeNode* root, int n) {
        if (!root) return true;
        
        if (root->val != n) return false;
        
        bool left = recursion(root->left, n);
        bool right = recursion(root->right, n);
        
        return left && right;
    }
    bool isUnivalTree(TreeNode* root) {
        return recursion(root, root->val);
    }
};