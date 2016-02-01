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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if (!l1) {
            return l2;
        }
        if (!l2) {
            return l1;
        }
        ListNode* current1 = l1;
        ListNode* current2 = l2;
        ListNode* last2 = new ListNode(0);
        last2 -> next = current2;
        
        while (current1) {
            if (current1 -> val <= current2 -> val) {
                l1 = current1 -> next;
                last2 -> next = current1;
                current1 -> next = current2;
                current2 = current1;
                current1 = l1;
            }
            else {
                if (!current2 -> next) {
                    current2 -> next = current1;
                    return l2;
                }
                last2 = current2;
                current2 = current2 -> next;
            }
            if (current2 -> next == l2) {
                l2 = current2;
            }
        }
        return l2;
    }
};

//Better Solution
class Solution 
{
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) 
    {
        ListNode* head = new ListNode(0), *p = head;
        while (NULL != l1 && NULL != l2) 
        {
            if (l1->val < l2->val) { p->next = l1; l1 = l1->next; }
            else { p->next = l2; l2 = l2->next; }
            p = p->next;
        }
        if (NULL == l1) p->next = l2;
        else p->next = l1;
        p = head;
        head = head->next;
        delete p;
        return head;
    }
};