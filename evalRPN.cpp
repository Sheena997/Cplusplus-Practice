/*
逆波兰表达式求值（后缀表达式）
https://leetcode-cn.com/problems/evaluate-reverse-polish-notation/submissions/
*/

class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> s;
        for(size_t i = 0; i < tokens.size(); ++i)
        {
            if(tokens[i].size() == 1
             && tokens[i] == "+"
             || tokens[i] == "-"
             || tokens[i] == "*"
             || tokens[i] == "/")
            {
                int right = s.top();
                s.pop();
                int left = s.top();
                s.pop();
                if(tokens[i] == "+")
                    s.push(left + right);
                else if(tokens[i] == "-")
                    s.push(left - right);
                else if(tokens[i] == "*")
                    s.push(left * right);
                else if(tokens[i] == "/")
                    s.push(left / right);
                else
                    assert(false);
            }
            else
            {
                s.push(atoi(tokens[i].c_str()));
            }
        }
        return s.top();
    }
};