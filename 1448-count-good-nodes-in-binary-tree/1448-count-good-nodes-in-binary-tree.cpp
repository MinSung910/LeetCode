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
    int cnt = 0;
    void traversal(TreeNode* root, int maxNum) {
        if (!root) return;
        
        if (root->val >= maxNum) {
            cnt++;
            maxNum = root->val;
        }
        traversal(root->left, maxNum);
        traversal(root->right, maxNum);
    }
    int goodNodes(TreeNode* root) {
        traversal(root, root->val);
        return cnt;
    }
};