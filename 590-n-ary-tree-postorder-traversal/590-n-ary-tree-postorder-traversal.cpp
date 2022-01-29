/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    void rec(Node* root, vector<int>& v) {
        if (!root) return;
        
        for (auto& x : root->children) {
            rec(x, v);
            v.push_back(x->val);
        }
    }
    vector<int> postorder(Node* root) {
        vector<int> v;
        rec(root, v);
        if (root) v.push_back(root->val);
        return v;
    }
};