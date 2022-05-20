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
	ListNode* swapNodes(ListNode* head, int k) {
		vector<int> v;
		ListNode* cur = head;

		while (cur) {
			v.push_back(cur->val);
			cur = cur->next;
		}

		swap(v[k - 1], v[v.size() - 1 - (k - 1)]);

		ListNode* pHead = nullptr;
		ListNode* pTail = nullptr;

		for (int i = 0; i < v.size(); i++) {
			ListNode* pNode = new ListNode(v[i]);

			if (pHead == nullptr && pTail == nullptr) {
				pHead = pNode, pTail = pNode;
			}
			else {
				pTail->next = pNode;
				pTail = pNode;
			}
		}
		return pHead;
	}
};