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
    ListNode* merge(ListNode* pA, ListNode* pB) {
        if (pA == nullptr) return pB;
        else if (pB == nullptr) return pA;
        
        ListNode* head = (pA->val < pB->val) ? pA : pB;
        head->next = (pA->val < pB->val) ? merge(pA->next, pB) : merge(pA, pB->next);
        return head;
    }
    
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        ListNode* ret = nullptr;
        
        for (auto& list : lists) {
            ret = merge(ret, list);        
        }
        
        return ret;
    }
};