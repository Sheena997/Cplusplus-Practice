/*
����һ����СΪ n �����飬�ҵ����е�������������ָ�������г��ִ�������?? n/2 ??��Ԫ�ء�

����Լ��������Ƿǿյģ����Ҹ������������Ǵ���������

ʾ��?1:

����: [3,2,3]
���: 3

��Դ�����ۣ�LeetCode��
���ӣ�https://leetcode-cn.com/problems/majority-element
*/
/*Ħ��ͶƱ�����Ƽ���Ч���ڴ棩��
�ȼ����һ��������������count=1��
����������������ͬ��+1����ͬ��-1��
��countΪ0ʱ������µ�����Ϊ��ѡ��������ǰ�᣺�г��ִ�������n/2�������ڣ�
*/
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count = 1;
        int ret = nums[0];
        for(int i = 1; i < nums.size(); ++i)
        {
            if(count == 0)
                ret = nums[i];
            if(nums[i] == ret)
                ++count;
            else
                --count;  
        }
        return ret;
    }
};