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
    void recursion(TreeNode* root, int& s) {
        if (!root) return;
        
        if (root->left && !root->left->left && !root->left->right) s += root->left->val;
        recursion(root->left, s);
        recursion(root->right, s);
    }
    int sumOfLeftLeaves(TreeNode* root) {
        int ans = 0;
        recursion(root, ans);
        return ans;
    }
};