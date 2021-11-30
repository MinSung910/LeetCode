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
	vector<int> nextLargerNodes(ListNode* head) {
		ListNode* cur = head;
		vector<int> tmp;
		stack<int> s;

		while (cur) {
			tmp.push_back(cur->val);
			cur = cur->next;
		}

		vector<int> ans(tmp.size(), 0);
		for (int i = 0; i < tmp.size(); i++) {
			while (!s.empty()) {
				if (tmp[s.top()] < tmp[i]) {
					int n = s.top();
					s.pop();
					ans[n] = tmp[i];
				}
				else {
					break;
				}
			}
			s.push(i);
		}
		return ans;
	}
};