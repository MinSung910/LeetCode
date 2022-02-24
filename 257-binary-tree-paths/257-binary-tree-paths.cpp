class Solution {
public:
	void recursion(TreeNode* root, string s, vector<string>& ans) {
		if (!root) return;

		if (!root->left && !root->right) {
            s += to_string(root->val); 
			ans.push_back(s);
			return;
		}
		
        s += to_string(root->val) + "->";
		if (root->left) recursion(root->left, s, ans);
		if (root->right) recursion(root->right, s, ans);
	}
	vector<string> binaryTreePaths(TreeNode* root) {
		vector<string> ans;
		recursion(root, "", ans);
		return ans;
	}
};
