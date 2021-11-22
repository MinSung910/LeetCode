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
	ListNode* reverseList(ListNode* head) {
		stack<int> s;

		while (head) {
			s.push(head->val);
			head = head->next;
		}
		
		ListNode* pHead = nullptr;
		ListNode* pTail = nullptr;

		while (!s.empty()) {
			int top = s.top();
			s.pop();
			ListNode* pNode = new ListNode(top);

			if (pHead == nullptr) {
				pHead = pNode;
				pTail = pNode;
			}
			else {
				pTail->next = pNode;
				pTail = pNode;
			}
		}
		return pHead;

	}
};