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
    ListNode* sortList(ListNode* head) {
        vector<int> v;
        ListNode* cur = head;
        ListNode* temp = head;
        
        while (cur) {
            v.push_back(cur->val);
            cur = cur->next;
        }
        
        sort(v.begin(), v.end());
        
        int i = 0;
        while(temp) {
            temp->val = v[i];
            temp = temp->next;
            i++;
        }
        return head;        
    }
};