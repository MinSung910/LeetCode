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
    void recursion(TreeNode* root, vector<int>& tmp) {
        if (!root) return;
        
        tmp.push_back(root->val);
        recursion(root->left, tmp);
        recursion(root->right, tmp);
    }
    int minDiffInBST(TreeNode* root) {
        vector<int> tmp;
        recursion(root, tmp);
        sort(tmp.begin(), tmp.end());
        int ans = INT_MAX;
        for (int i = 1; i < tmp.size(); i++) {
            ans = min(tmp[i] - tmp[i - 1], ans);
        }
        return ans;
    }
};