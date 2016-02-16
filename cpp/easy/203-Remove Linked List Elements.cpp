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
    ListNode* removeElements(ListNode* head, int val) {
        if (!head) {
            return head;
        }
        ListNode* last = new ListNode(0);
        last -> next = head;
        ListNode* current = head;
        while (current) {
            if (current -> val == val) {
                last -> next = current -> next;
                if (current == head) {
                    head = current -> next;
                }
                current = current -> next;
            }
            else {
                last = current;
                current = current -> next;
            }
        }
        return head;
    }
};

//Better solution
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
    ListNode* removeElements(ListNode* head, int val) {
        while (head && head -> val == val) {
            head = head -> next;
        }
        if (!head) {
            return head;
        }
        ListNode* last = head;
        ListNode* current = head -> next;
        while (current) {
            if (current -> val == val) {
                last -> next = current -> next;
            }
            else {
                last = current;
            }
            current = current -> next;
        }
        return head;
    }
};