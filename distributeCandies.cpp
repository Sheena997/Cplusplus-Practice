
/*
����һ��ż�����ȵ����飬���в�ͬ�����ִ����Ų�ͬ������ǹ���ÿһ�����ִ���һ���ǹ�������Ҫ����Щ�ǹ�ƽ���ָ�һ���ܵܺ�һ�����á��������ÿ��Ի�õ�����ǹ�����������

ʾ�� 1:

����: candies = [1,1,2,2,3,3]
���: 3
����: һ��������������ǹ���ÿһ�ֶ���������
     ���ŷ��䷽�������û��[1,2,3],�ܵ�Ҳ���[1,2,3]������ʹ���û���ǹ�����������ࡣ

��Դ�����ۣ�LeetCode��
���ӣ�https://leetcode-cn.com/problems/distribute-candies
���ǹ�
*/

class Solution {
public:
    int distributeCandies(vector<int>& candies) {
        int len = candies.size();
        set<int> res;
        for(int i = 0; i < len; ++i)
        {
            res.insert(candies[i]);
        }
        int type = res.size();
        if(type < len/2)
            return type;
        else
            return len/2;
    }
};
