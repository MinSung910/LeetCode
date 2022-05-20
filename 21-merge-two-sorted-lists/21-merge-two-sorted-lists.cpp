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
	ListNode* helper(ListNode* l1, ListNode* l2) {
		if (!l1 && !l2) return nullptr;
		else if (!l1) return l2;
		else if (!l2) return l1;

		int a = l1 ? l1->val : 0;
		int b = l2 ? l2->val : 0;

		int c;
		if (a <= b) {
			if (l1) l1 = l1->next;
			c = a;
		}
		else {
			if (l2) l2 = l2->next;
			c = b;
		}
		ListNode *pNode = new ListNode(c);
		pNode->next = helper(l1, l2);

		return pNode;
 	}
	ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
		return helper(list1, list2);
	}
};