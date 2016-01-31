/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if (!head) {
            return head;
        }
        
        ListNode* current = head;
        ListNode* follow = current -> next;
        ListNode* last = NULL;
        
        do {
            current -> next = last;
            last = current;
            current = follow;
            follow = follow -> next;
        } while (follow);
        
        current -> next = last;
        
        return current;
    }
};