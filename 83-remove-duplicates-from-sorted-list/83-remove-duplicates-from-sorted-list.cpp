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
    ListNode* deleteDuplicates(ListNode* head) {
        unordered_set<int> set;
        ListNode* prev = nullptr;
        ListNode* cur = head;
        
        while (cur) {
			if (set.find(cur->val) == set.end()) {
				set.insert(cur->val);
				prev = cur;
				cur = cur->next;
			}
			else {
				prev->next = cur->next;
				cur = cur->next;
			}
		}
		return head;
    }
};