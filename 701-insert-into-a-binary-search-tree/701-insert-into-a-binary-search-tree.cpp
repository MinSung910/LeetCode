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
void insert(TreeNode* root, TreeNode* parent, int val, char c)
{
    if(root==NULL)
    {
        TreeNode* temp = new TreeNode(val);
        if(c=='l') parent->left=temp;
        else if(c=='r') parent->right=temp;
        return;
    }
    if(val>root->val)
    {
        insert(root->right, root, val, 'r');
    }
    else if(val<root->val)
    {
        insert(root->left, root, val, 'l');
    }
    
}
class Solution {
public:
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        
        if(root==NULL) 
        {
            root = new TreeNode(val);
            return root;
        }
        insert(root, NULL, val, 'p');
        return root;
        
    }
};