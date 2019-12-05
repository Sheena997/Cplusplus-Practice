
/*
������������L��R���ҵ�������[L, R]��Χ�ڣ�������λλ��Ϊ����������������

��ע�⣬������λ��������Ʊ�ʾ��1�ĸ���������?21?�Ķ����Ʊ�ʾ?10101?�� 3 ��������λ�����У�1 ������������

ʾ�� 1:

����: L = 6, R = 10
���: 4
����:
6 -> 110 (2 ��������λ��2 ������)
7 -> 111 (3 ��������λ��3 ������)
9 -> 1001 (2 ��������λ��2 ������)
10-> 1010 (2 ��������λ��2 ������)

��Դ�����ۣ�LeetCode��
���ӣ�https://leetcode-cn.com/problems/prime-number-of-set-bits-in-binary-representation

*/
class Solution {
public:
    
    bool isPrime(int count)
    {
        if (count < 2)
            return false;
        int num = sqrt(count);
        for (int i = 2; i <= num; ++i) 
        {
            if (count % i == 0)
                return false;
        }
        return true;
    }
    int countPrimeSetBits(int L, int R) {
        int sum = 0;
        for(int i = L; i <= R; ++i)
        {
           int tmp = i;
           int count = 0;
           while(tmp != 0)
           {
               tmp &= (tmp - 1);
               ++count;
           }
            if(isPrime(count))
                ++sum;
        }
        return sum;
    }
};
