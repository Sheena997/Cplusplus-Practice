/*����һ���ַ�����һ������ k������Ҫ�Դ��ַ�����ͷ�����ÿ�� 2k ���ַ���ǰk���ַ����з�ת�����ʣ������ k ���ַ�����ʣ�������ȫ����ת�������С�� 2k �����ڻ���� k ���ַ�����תǰ k ���ַ�������ʣ����ַ�����ԭ����

ʾ��:

����: s = "abcdefg", k = 2
���: "bacdfeg"

��Դ�����ۣ�LeetCode��
���ӣ�https://leetcode-cn.com/problems/reverse-string-ii
*/
class Solution {
public:
    string reverseStr(string s, int k) {
        for(string::iterator it = s.begin(); it < s.end(); it += 2*k)
        {
            if(it + k < s.end())
                reverse(it, it + k);
            else
                reverse(it, s.end());
        }
        return s;
    }
};
