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
   bool isPalindrome(ListNode* head) {
        
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        
        ListNode* slow = head, *fast = head, *prev = NULL;
        
        while(fast && fast -> next){
            ListNode* temp = slow;
            slow = slow -> next;
            fast = fast -> next -> next;
            temp -> next = prev;
            prev = temp;
        }
        
        fast = fast ? slow -> next : slow;
        slow = prev;
        
        while(slow && fast){
            if(slow -> val != fast -> val){
                return false;
            }
            slow = slow -> next;
            fast = fast -> next;
        }
        
        return true;
        
    }
};