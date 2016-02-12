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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if (!head -> next) {
            return NULL;
        }
        ListNode* last = new ListNode(0);
        last -> next = head;
        ListNode* current = last;
        while (n) {
            head = head -> next;
            n--;
        }
        while (head) {
            head = head -> next;
            current = current -> next;
        }
        head = current -> next;
        current -> next = current -> next -> next;
        head = last -> next;
        return head;
    }
};