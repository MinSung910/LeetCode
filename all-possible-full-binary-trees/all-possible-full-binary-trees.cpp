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
    vector<TreeNode*> allPossibleFBT(int n) {
        vector<TreeNode*> ans;
        
        if (n % 2 == 0) {
            return ans;
        }
        
        if (n == 1) {
            TreeNode* root = new TreeNode();
            ans.push_back(root);
            return ans;
        }
        
        for (int i = 1; i < n; i += 2) {
            vector<TreeNode*> l_vec = allPossibleFBT(i);
            vector<TreeNode*> r_vec = allPossibleFBT(n - (i + 1));

            for (auto& l : l_vec) {
                for (auto& r : r_vec) {
                    TreeNode* root = new TreeNode();
                    root->left = l;
                    root->right = r;
                    ans.push_back(root);
                }
            }
        }

        return ans;
    }
};