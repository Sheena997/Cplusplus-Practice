
/*
���������ַ���������Ҫ���������ַ������ҳ�����������С���������ж������£�������Ϊĳ�ַ������е�������У��������������ַ����������У���

�����п���ͨ��ɾȥ�ַ����е�ĳЩ�ַ�ʵ�֣������ܸı�ʣ���ַ������˳�򡣿�����Ϊ�����ַ����������У��κ��ַ���Ϊ������������С�

����Ϊ�����ַ����������������еĳ��ȡ���������ڣ��򷵻� -1��

ʾ�� :

����: "aba", "cdc"
���: 3
����: ��������п�Ϊ "aba" (�� "cdc")

��Դ�����ۣ�LeetCode��
���ӣ�https://leetcode-cn.com/problems/longest-uncommon-subsequence-i
*/
class Solution {
public:
    int findLUSlength(string a, string b) {
        int l1 = a.length();
        int l2 = b.length();
        if(l1 != l2)
        {
            return max(l1,l2);
        }
        else
        {
            if(a != b)//if(a.compare(b) != 0)
                return l1;
            else
                return -1;
        }
    }
};
