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
    int good(TreeNode* root, int n) {
        if (!root) return 0;
        
        int cnt = 0;
        if (root->val >= n) {
            cnt++;
            n = root->val;
        }
        
        int l = good(root->left, n);
        int r = good(root->right, n);
        return cnt + l + r;
    }
    int goodNodes(TreeNode* root) {
        return good(root, root->val);
    }
};