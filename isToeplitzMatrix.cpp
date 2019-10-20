/*
���һ�������ÿһ���������ϵ����µĶԽ����Ͼ�����ͬԪ�أ���ô����������������ľ���

����һ��?M x N?�ľ��󣬵��ҽ��������������ľ���ʱ����?True��

��Դ�����ۣ�LeetCode��
���ӣ�https://leetcode-cn.com/problems/toeplitz-matrix

*/

class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& matrix) {
        for(int i = 0; i < matrix.size(); ++i)
        {
            for(int j = 0; j < matrix[i].size(); ++j)
            {
               if(i + 1 < matrix.size() && j + 1 < matrix[i].size())
               {
                   if(matrix[i][j] != matrix[i+1][j+1])
                        return false;
               }
            }
        }
        return true;
    }
};