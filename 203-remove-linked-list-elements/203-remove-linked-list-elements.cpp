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
	ListNode* removeElements(ListNode* head, int val) {
		ListNode* pHead = nullptr;
		ListNode* pTail = nullptr;

		while (head) {
			if (head->val == val) {
				while (head && head->val == val) {
					head = head->next;
				}
				if (head == nullptr) break;
			}

			ListNode* pNode = new ListNode(head->val);

			if (pHead == nullptr && pTail == nullptr) {
				pHead = pNode;
				pTail = pNode;
			}
			else {
				pTail->next = pNode;
				pTail = pNode;
			}
			head = head->next;
		}

		return pHead;
	}
};