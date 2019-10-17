/*
����Ҫ�Ѹ������ַ��� S?������д��ÿһ���ϣ�ÿһ�е������Ϊ100����λ�����������дĳ����ĸ��ʱ���ʹ���г�����100 ����λ����ô����Ӧ�ð������ĸд����һ�С����Ǹ�����һ������?widths?���������?widths[0] ���� 'a' ��Ҫ�ĵ�λ��?widths[1] ���� 'b' ��Ҫ�ĵ�λ��...��?widths[25] ���� 'z' ��Ҫ�ĵ�λ��

���ڻش��������⣺���ٶ������ܷ���S���Լ����һ��ʹ�õĿ���Ƕ��ٸ���λ������Ĵ���Ϊ����Ϊ2�������б��ء�

��Դ�����ۣ�LeetCode��
���ӣ�https://leetcode-cn.com/problems/number-of-lines-to-write-string
*/
class Solution {
public:
    vector<int> numberOfLines(vector<int>& widths, string S) {
        int rowlen = 0;
        int row = 1;
        for(int i = 0; i < S.size(); ++i)
        {
            int len = widths[S[i] - 'a'];
            if(len + rowlen > 100)
            {
                ++row;
                rowlen = len;
            }
            else
            {
                rowlen += len;
            }
        }
        return {row, rowlen};
    }