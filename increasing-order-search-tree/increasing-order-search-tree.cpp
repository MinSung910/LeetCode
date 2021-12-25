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
    TreeNode* increasingBST(TreeNode* pRoot) {
        if (!pRoot) {
            return nullptr;
        }
        
        if (pRoot->left) {
            TreeNode* pNewRoot = pRoot->left;
            pRoot->left = pNewRoot->right;
            pNewRoot->right = pRoot;
            return increasingBST(pNewRoot);
        }
        
        else if(pRoot->right) {
            pRoot->right = increasingBST(pRoot->right);
            return pRoot;
        }
        
        return pRoot;
    }
};