class MinStack {
public:
    
    struct ListNode {
        int val;
        int min;
        ListNode *next;
        ListNode(int x, int y) : val(x), min(y), next(NULL) {}
    };
    ListNode *head = NULL;
    
    void push(int x) {
        int min;
        if (!head) {
            head = new ListNode(x, x);
        }
        else {
            min = head -> min > x ? x : head -> min;
            ListNode* temp = new ListNode(x, min);
            temp -> next = head;
            head = temp;
        }
    }
    
    void pop() {
        head = head -> next;
    }
    
    int top() {
        return head -> val;
    }
    
    int getMin() {
        return head -> min;
    }
};