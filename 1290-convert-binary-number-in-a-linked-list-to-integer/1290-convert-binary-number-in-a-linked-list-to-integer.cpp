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
	int getDecimalValue(ListNode* head) {
		string s = "";
		int ans = 0;

		while (head) {
			s += to_string(head->val);
			head = head->next;
		}

		ans += s[s.size() - 1] - '0';
		int n = 2;
		for (int i = s.size() - 2; i >= 0; i--) {
			if (s[i] == '1') ans += n;
			n *= 2;
		}

		return ans;
	}
};