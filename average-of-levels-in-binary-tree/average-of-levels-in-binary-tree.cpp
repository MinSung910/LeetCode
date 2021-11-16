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
	int depth = 0;
	void findNodeDepth(TreeNode* root, int level) {
		if (!root) {
			return;
		}
		if (depth < level) {
			depth = level;
		}
		findNodeDepth(root->left, level + 1);
		findNodeDepth(root->right, level + 1);
	}
	void findAverage(TreeNode* root, vector<double>& sum, vector<int> & levelCnt, int level) {
		if (!root) {
			return;
		}
		sum[level] += int(root->val);
		levelCnt[level]++;
		findAverage(root->left, sum, levelCnt, level + 1);
		findAverage(root->right, sum, levelCnt, level + 1);
	}
    
	vector<double> averageOfLevels(TreeNode* root) {
		findNodeDepth(root, 1);

		vector<double> sum(depth, 0);
		vector<int> levelCnt(depth, 0);
		vector<double> ans;

		findAverage(root, sum, levelCnt, 0);

		for (int i = 0; i < levelCnt.size(); i++) {
			ans.push_back(double(sum[i]) / double(levelCnt[i]));
		}
		return ans;
	}
};