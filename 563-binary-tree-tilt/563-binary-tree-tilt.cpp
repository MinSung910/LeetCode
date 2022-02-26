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
	int sum = 0;
	int recursion(TreeNode* root) {
		if (!root) return 0;

		int r = root->val;
		int left = recursion(root->left);
		int right = recursion(root->right);

		sum += abs(right - left);
		return right + left + r;
	}
	int findTilt(TreeNode* root) {
		recursion(root);
		return sum;
	}
};