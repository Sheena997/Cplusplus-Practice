/*
����һ���Ǹ����� num������������λ�ϵ�������ӣ�ֱ�����Ϊһλ����

ʾ��:

����: 38
���: 2 
����: ��λ��ӵĹ���Ϊ��3 + 8 = 11, 1 + 1 = 2�� ����2 ��һλ�������Է��� 2��

��Դ�����ۣ�LeetCode��
���ӣ�https://leetcode-cn.com/problems/add-digits
*/

class Solution {
public:
    int addDigits(int num) {
        int ret = 0;
        if(num < 10)
            return num;
        while(num >= 10)
        {
            int sum = 0;
            while(num)
            {
                sum += num % 10;
                num /= 10;
            }
            ret = sum;
            num = ret;
        }
        return ret;
    }
};




