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
    int sum;
    int deepLevel = -1;
    void deepest(TreeNode* root, int curLevel) {
        if (!root) return;
        
        if (deepLevel < curLevel) {
            deepLevel = curLevel;
            sum = root->val;
        }
        else if (deepLevel == curLevel) {
            sum += root->val;
        }
        deepest(root->left, curLevel + 1);
        deepest(root->right, curLevel + 1);
    }
    int deepestLeavesSum(TreeNode* root) {
        deepest(root, 0);
        return sum;
    }
};