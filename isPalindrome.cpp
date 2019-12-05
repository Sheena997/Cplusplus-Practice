/*����һ���ַ�������֤���Ƿ��ǻ��Ĵ���ֻ������ĸ�������ַ������Ժ�����ĸ�Ĵ�Сд��

˵���������У����ǽ����ַ�������Ϊ��Ч�Ļ��Ĵ���
OJ���ӣ�https://leetcode-cn.com/problems/valid-palindrome/
*/

class Solution {
public:
    bool isChar_Number(char ch)
    {
        if((ch >= 'a' && ch <= 'z') ||  (ch >= '0' && ch <= '9'))
            return true;
        return false;
    }
    bool isPalindrome(string s) {
        if(s.empty())
            return true;
        size_t first = 0, last = s.size()-1;
        //��ȫ��ת��ΪСд��ĸ
        for(auto& c: s)
        {
            if(c >= 'A' && c <= 'Z')
                c += 32;
        }
        while(first < last)
        {
            while((first < last) && false == isChar_Number(s[first]))
                ++first;
            while((first < last) && false == isChar_Number(s[last]))
                --last;
            if(first < last)
            {
                if(s[first] == s[last])
                {
                    ++first;
                    --last;
                }
                else
                {
                    return false;
                }
            }
        }
         return true;
    }
};