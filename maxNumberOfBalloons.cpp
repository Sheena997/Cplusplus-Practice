/*
����һ���ַ���?text������Ҫʹ�� text �е���ĸ��ƴ�վ����ܶ�ĵ���?"balloon"�����򣩡�

�ַ���?text �е�ÿ����ĸ���ֻ�ܱ�ʹ��һ�Ρ����㷵��������ƴ�ճ����ٸ�����?"balloon"��

��Դ�����ۣ�LeetCode��
���ӣ�https://leetcode-cn.com/problems/maximum-number-of-balloons

*/
class Solution {
public:
    int maxNumberOfBalloons(string text) {
        vector<int> v(5,0);
        for(int i = 0; i < text.length(); ++i)
        {
            switch(text[i])
            {
                case 'b': ++v[0];
                          break;
                case 'a': ++v[1];
                          break;
                case 'l': ++v[2];
                          break;
                case 'o': ++v[3];
                          break;
                case 'n': ++v[4];
                          break;
                default:break;
            }
        }
        v[2] /= 2;
        v[3] /= 2;
        sort(v.begin(), v.end());
        return v[0];
    }
};