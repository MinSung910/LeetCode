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
	ListNode* helper(ListNode* l1, ListNode* l2, int carry) {
		if (!l1 && !l2 && carry == 0) return nullptr;

		int a = l1 ? l1->val : 0;
		int b = l2 ? l2->val : 0;

		int cNum = (a + b + carry) % 10;
		int cCarry = (a + b + carry) / 10;
		

		ListNode* pNode = new ListNode(cNum);
		
		if (l1) l1 = l1->next;
		if (l2) l2 = l2->next;
		pNode->next = helper(l1, l2, cCarry);

		return pNode;
	}
	ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
		return helper(l1, l2, 0);
	}
};