/*
ʵ�ֺ��� ToLowerCase()���ú�������һ���ַ������� str��
�������ַ����еĴ�д��ĸת����Сд��ĸ��֮�󷵻��µ��ַ�����
ʾ�� 1��

����: "Hello"
���: "hello"

��Դ�����ۣ�LeetCode��
���ӣ�https://leetcode-cn.com/problems/to-lower-case/
*/

class Solution {
public:
    string toLowerCase(string str) {
        string s = "";
        for(auto &i : str)
		//��д��Сд��Сд���д : �ַ� ^= 32;��д��Сд��Сд��Сд : �ַ� |= 32;Сд���д����д���д : �ַ� &= -33;
        {
            i |= 32;
        }
        s = str;
        return s;
    }
};

