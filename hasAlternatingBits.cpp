/*
����һ����������������Ƿ�Ϊ����λ�������������仰˵���������Ķ����������ڵ�����λ��������ȡ�

ʾ�� 1:

����: 5
���: True
����:
5�Ķ���������: 101

��Դ�����ۣ�LeetCode��
���ӣ�https://leetcode-cn.com/problems/binary-number-with-alternating-bits
*/
class Solution {
public:
    bool hasAlternatingBits(int n) {
        n = n ^ (n >> 1);
        return (n & ((long)n+1)) == 0;
    }
};