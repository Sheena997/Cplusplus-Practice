/*����һ���ַ���������Ҫ��ת�ַ�����ÿ�����ʵ��ַ�˳��ͬʱ�Ա����ո�͵��ʵĳ�ʼ˳��

ʾ��?1:

����: "Let's take LeetCode contest"
���: "s'teL ekat edoCteeL tsetnoc"?

��Դ�����ۣ�LeetCode��
���ӣ�https://leetcode-cn.com/problems/reverse-words-in-a-string-iii
*/
class Solution {
public:
    string reverseWords(string s) {
        for(string:: iterator it = s.begin(), end = s.begin() + 1;end < s.end();  ++end)
        {
            if(*end == ' ')
            {
                reverse(it, end);
                it = end + 1;
            }
            else if(end + 1 == s.end())
            {
                reverse(it, end+1);
            }
        }
        return s;
    }
};
