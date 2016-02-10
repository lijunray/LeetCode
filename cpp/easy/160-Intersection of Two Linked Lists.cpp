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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int countA = getLength(headA);
        int countB = getLength(headB);
        int diff = countA - countB;
        int large;
        int small;
        if (diff > 0) {
            large = countA;
            small = countB;
            while (diff != 0) {
                headA = headA -> next;
                diff--;
            }
        }
        else {
            large = countB;
            small = countA;
            while (diff != 0) {
                headB = headB -> next;
                diff++;
            }
        }
        
        while (headA != headB) {
            headA = headA -> next;
            headB = headB -> next;
        }
        return headA;
    }
    
    int getLength (ListNode* head) {
        int result = 0;
        while (head) {
            result++;
            head = head -> next;
        }
        return result;
    }
};