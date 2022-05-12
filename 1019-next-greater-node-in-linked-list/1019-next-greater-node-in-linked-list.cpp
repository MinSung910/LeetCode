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
		
		vector<int> ans;
		ListNode* cur = head;
		while (cur) {
			ans.push_back(cur->val);
			cur = cur->next;
		}

		stack<int> s;
		for (int i = 0; i < ans.size(); i++) {
			if (s.empty()) s.push(i);
			else {
				while (!s.empty() && ans[s.top()] < ans[i]) {
					ans[s.top()] = ans[i];
					s.pop();
				}
				s.push(i);
			}
		}
        
        while (!s.empty()) {
			ans[s.top()] = 0;
			s.pop();
		}

		return ans;
	}
};
