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
    void recursion(TreeNode* root, vector<int>& v) {
        if (!root) return;
        
        recursion(root->left, v);
        v.push_back(root->val);
        recursion(root->right, v);
    }
    int minDiffInBST(TreeNode* root) {
        int ans = INT_MAX;
        vector<int> v;
        recursion(root, v);
        for (int i = 1; i < v.size(); i++) {
            ans = min(ans, v[i] - v[i - 1]);
        }        
        return ans;
    }
};