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
	vector<ListNode*> splitListToParts(ListNode* head, int k) {
		vector<ListNode*> ans;
		ListNode* cur = head;
		int nodeCnt = 0;

		while (cur) {
			nodeCnt++;
			cur = cur->next;
		}
		
		int extra = nodeCnt % k;

		for (int i = 0; i < k; i++) {
			int subLen = nodeCnt / k;

			if (extra > 0) {
				subLen = subLen + 1;
				extra--;
			}
			
			ListNode* pHead = nullptr;
			ListNode* pTail = nullptr;

			for (int j = 0; j < subLen; j++) {
				ListNode* pNode = new ListNode(head->val);
				
				if (pHead == nullptr) {
					pHead = pNode;
					pTail = pNode;
				}
				else {
					pTail->next = pNode;
					pTail = pNode;
				}
				head = head->next;
			}
			ans.push_back(pHead);
		}
		return ans;
	}
};