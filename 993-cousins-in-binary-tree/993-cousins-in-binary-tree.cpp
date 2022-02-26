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
    bool isCousins(TreeNode* root, int x, int y) {
        TreeNode* xP;
        TreeNode* yP;
        int xDepth;
        int yDepth;
        
        int depth = 0;
        queue<TreeNode*> q;
        q.push(root);
        
        while (!q.empty()) {
            depth++;
            int s = q.size();
            for (int i = 0; i < s; i++) {
                TreeNode* f = q.front();
                q.pop();
                
                if (f->left) {
                    if (f->left->val == x) {
                        xP = f;
                        xDepth = depth;
                    }
                    else if (f->left->val == y) {
                        yP = f;
                        yDepth = depth;
                    }
                    else q.push(f->left);
                }
                if (f->right) {
                    if (f->right->val == x) {
                        xP = f;
                        xDepth = depth;
                    }
                    else if (f->right->val == y) {
                        yP = f;
                        yDepth = depth;
                    }
                    else q.push(f->right);
                }
            }
        }
        if ((xP != yP) && (xDepth == yDepth)) return true;
        else return false;
    }
};