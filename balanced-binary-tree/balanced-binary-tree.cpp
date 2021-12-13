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
	bool flag = true;
	int childGap(TreeNode* root) {
		if (!root) { return 0; }
        //
		int left = childGap(root->left);
		int right = childGap(root->right);
		if (abs(left - right) > 1) {
			flag = false;
		}
		return max(left, right) + 1;
	}
    
	bool isBalanced(TreeNode* root) {
        childGap(root);
        return flag;		
	}
};