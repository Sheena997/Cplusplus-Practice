/*
来源：牛客网
链接：https://www.nowcoder.com/questionTerminal/6a296eb82cf844ca8539b57c23e6e9bf
输入n个整数，找出其中最小的K个数。例如输入4,5,1,6,2,7,3,8这8个数字，
则最小的4个数字是1,2,3,4,。
*/
class Solution {
public:
    vector<int> GetLeastNumbers_Solution(vector<int> input, int k) {
        vector<int> res;
        if(k > input.size())
            return res;
        priority_queue<int, vector<int>, greater<int>> q;
        auto it = input.begin();
        while(it != input.end())
        {
            q.push(*it);
            ++it;
        }
        while(k--)
        {
            res.push_back(q.top());
            q.pop();
        }
        return res;
    }
};