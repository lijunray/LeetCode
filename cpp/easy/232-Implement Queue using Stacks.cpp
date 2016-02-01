class Queue {
private:
    stack<int> my_stack;

public:
    // Push element x to the back of queue.
    void push(int x) {
        stack<int> temp_stack;
        while (!my_stack.empty()) {
            temp_stack.push(my_stack.top());
            my_stack.pop();
        }
        my_stack.push(x);
        while (!temp_stack.empty()) {
            my_stack.push(temp_stack.top());
            temp_stack.pop();
        }
    }

    // Removes the element from in front of queue.
    void pop(void) {
        my_stack.pop();
    }

    // Get the front element.
    int peek(void) {
        return my_stack.top();
    }

    // Return whether the queue is empty.
    bool empty(void) {
        return my_stack.empty();
    }
};