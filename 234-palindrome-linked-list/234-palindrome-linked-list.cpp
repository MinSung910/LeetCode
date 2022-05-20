/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        ListNode* tail = head;
        vector<int> v;
        
        while (tail) {
            v.push_back(tail->val);
            tail = tail->next;
        }
        vector<int> v1 = v;
        reverse(v.begin(), v.end());
        
        for (int i = 0; i < v.size(); i++) {
            if (v[i] != v1[i]) return false;
        }
        return true;
    }
};