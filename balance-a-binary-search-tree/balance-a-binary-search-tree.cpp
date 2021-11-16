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
    void makeVector(TreeNode* root, vector<int>& v) {
        if (!root) {
            return;
        }
        
        makeVector(root->left, v);
        v.push_back(root->val);
        makeVector(root->right, v);
    }
    
    TreeNode* makeTree(const vector<int>& v, int left, int right) {
        if (left > right) {
            return nullptr;
        }
        
        int half = (left + right) / 2;
        
        TreeNode* pRoot = new TreeNode();
        
        pRoot->val = v[half];
        pRoot->left = makeTree(v, left, half - 1);
        pRoot->right = makeTree(v, half + 1, right);
        
        return pRoot;
    }
    
    TreeNode* balanceBST(TreeNode* root) {
        vector<int> v;
        makeVector(root, v);
        
        return makeTree(v, 0, v.size() - 1);
    }
};