/*
���������������У���һ�����б�ʾջ��ѹ��˳�����жϵڶ�����
���Ƿ����Ϊ��ջ�ĵ���˳�򡣼���ѹ��ջ���������־�����ȡ���
������1,2,3,4,5��ĳջ��ѹ��˳������4,5,3,2,1�Ǹ�ѹջ���ж�
Ӧ��һ���������У���4,3,5,1,2�Ͳ������Ǹ�ѹջ���еĵ������С�
��ע�⣺���������еĳ�������ȵģ�
����https://www.nowcoder.com/practice/d77d11405cc7470d82554cb392585106?tpId=13&&tqId=11174&rp=1&ru=/activity/oj&qru=/ta/coding-interviews/question-ranking
*/
class Solution {
public:
    bool IsPopOrder(vector<int> pushV,vector<int> popV) {
        size_t pushi = 0;
        size_t popi = 0;
        stack<int> s;
        while(pushi < pushV.size())
        {
            s.push(pushV[pushi]);
            while(!s.empty() && popV[popi] == s.top())
            {
                s.pop(); 
                ++popi;
            }
            ++pushi;
        }
        if(s.empty())
            return true;
        else
            return false;
    }
};