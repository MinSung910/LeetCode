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
   vector<TreeNode*> inorder;
        
    void makeInorder(TreeNode* root){
        if(!root){
            return;
        }
        makeInorder(root->left);
        inorder.push_back(root);
        makeInorder(root->right);
    }
    
    TreeNode* increasingBST(TreeNode* root) {
        makeInorder(root);
        TreeNode* newroot = new TreeNode(-1);
        TreeNode* curr = newroot;
        
        for(int i=0; i<inorder.size(); i++){
            curr->right = new TreeNode(inorder[i]->val);
            curr = curr->right;
            
        }
        return newroot->right;
    }
};