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
     void travel(Node* root, vector<int>& result) {
        if (!root) {
            return;
        }
        for (auto& child : root->children) {
            travel(child, result);
            result.push_back(child->val);
        }
    }
    vector<int> postorder(Node* root) {
        vector<int> result;
        travel(root, result);
        if (root) {
            result.push_back(root->val);
        }
        return result;
    }
};