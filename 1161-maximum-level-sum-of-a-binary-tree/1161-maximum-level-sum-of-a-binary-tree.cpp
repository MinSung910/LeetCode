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
    int maxLevelSum(TreeNode* root) {
        int answer = 0;
        if (!root) return 0;
        
        int depth = 0;
        int maxNum = INT_MIN;
        queue<TreeNode* > q;
        q.push(root);
        
        while(!q.empty()) {
            int levelSum = 0;
            int size = q.size();
            depth++;
            for (int i = 0; i < size; i++) {
                TreeNode* front = q.front();
                levelSum += front->val;
                q.pop();
                
                if (front->left) q.push(front->left);
                if (front->right) q.push(front->right);
            }
            if (maxNum < levelSum) {
                maxNum = levelSum;
                answer = depth;
            }
        }
        
        return answer;
    }
};