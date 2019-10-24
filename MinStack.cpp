/*用C++实现最小栈*/
class MinStack {
public:
    /** initialize your data structure here. */
    MinStack() {
        
    }
    
    void push(int x) {
        _st.push(x);
        if(_minst.empty() || x <= _minst.top())
            _minst.push(x);
    }
    
    void pop() {
        if(_st.top() == _minst.top())
            _minst.pop();
        _st.pop();
    }
    
    int top() {
        return _st.top();
    }
    
    int getMin() {
        return _minst.top();
    }
private:
    stack<int> _st;
    stack<int> _minst;    
};