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
    int total = 0;
    void sumRoot(TreeNode* root, int n) {
        if (!root) return;

        if (!root->left && !root->right) {
            total += n * 2 + root->val;
        }
        n = root->val == 1 ? n * 2 + 1 : n * 2;
		sumRoot(root->left, n);
        sumRoot(root->right, n);
        
    }
    int sumRootToLeaf(TreeNode* root) {
        sumRoot(root, 0);
        return total;
    }
};