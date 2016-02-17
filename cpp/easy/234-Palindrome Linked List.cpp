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
    bool isPalindrome(ListNode* head) {
        if (!head) {
            return true;
        }
        int length = getLength(head);
        ListNode* mid = head;
        for (int i = 0; i < length / 2; i++) {
            mid = mid -> next;
        }
        ListNode* tail = reverse(mid);
        for (int i = 0; i < length / 2; i++) {
            cout << tail -> val;
            if (head -> val != tail -> val) {
                return false;
            }
            head = head -> next;
            tail = tail -> next;
        }
        return true;
    }
    
    ListNode* reverse(ListNode* head) {
        ListNode* before = NULL;
        ListNode* after = head -> next;
        while (head) {
            head -> next = before;
            before = head;
            head = after;
            if (after != NULL) {
                after = after -> next;
            }
        }
        return before;
    }
    
    int getLength(ListNode* head) {
        int result = 0;
        while (head) {
            result++;
            head = head -> next;
        }
        return result;
    }
};

