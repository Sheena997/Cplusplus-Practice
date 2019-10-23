/*用两个栈实现队列*/
class MyQueue {
public:
    /** Initialize your data structure here. */
    MyQueue() {
        
    }
    
    /** Push element x to the back of queue. */
    void push(int x) {
        _pushst.push(x);
    }
    
    /** Removes the element from in front of queue and returns that element. */
    int pop() {
        if(_popst.empty())
        {
            while(!_pushst.empty())
            {
                int top = _pushst.top();
                _pushst.pop();
                _popst.push(top);
            }
        }
        int top = _popst.top();
        _popst.pop();
        return top;
    }
    
    /** Get the front element. */
    int peek() {
        if(_popst.empty())
        {
            while(!_pushst.empty())
            {
                int top = _pushst.top();
                _pushst.pop();
                _popst.push(top);
            }
        }
        int top = _popst.top();
        return top;
    }
    
    /** Returns whether the queue is empty. */
    bool empty() {
        return (_pushst.empty() && _popst.empty());
    }
private:
    stack<int> _pushst;
    stack<int> _popst;
};