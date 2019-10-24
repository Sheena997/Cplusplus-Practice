class MyStack {
public:
    /** Initialize your data structure here. */
    MyStack() {
        
    }
    
    /** Push element x onto stack. */
    void push(int x) {
        if(!_q1.empty())
            _q1.push(x);
        else
            _q2.push(x);
    }
    
    /** Removes the element on top of the stack and returns that element. */
    int pop() {
        if(!_q2.empty())
        {
           swap(_q1, _q2);
        }
        while(_q1.size() > 1)
        {
            int front = _q1.front();
            _q1.pop();
            _q2.push(front);
        }
        int front = _q1.front();
        _q1.pop();
        return front;
    }
    
    /** Get the top element. */
    int top() {
        queue<int> emptyq = _q1;
        queue<int> noemptyq = _q2;
        if(!_q1.empty())
        {
            emptyq = _q2;
            noemptyq = _q1;
        }
        while(noemptyq.size() > 1)
        {
            int front = noemptyq.front();
            noemptyq.pop();
            emptyq.push(front);
        }
        return noemptyq.front();
    }
    
    /** Returns whether the stack is empty. */
    bool empty() {
        return (_q1.empty() && _q2.empty());
    }
private:
    queue<int> _q1;
    queue<int> _q2;
};
