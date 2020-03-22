/*
问题描述
　　一个正整数如果任何一个数位不大于右边相邻的数位，则称为一个数位递增的数，例如1135是一个数位递增的数，而1024不是一个数位递增的数。
　　给定正整数 n，请问在整数 1 至 n 中有多少个数位递增的数？
输入格式
　　输入的第一行包含一个整数 n。
输出格式
　　输出一行包含一个整数，表示答案。
样例输入
30
样例输出
26
评测用例规模与约定
　　对于 40% 的评测用例，1 <= n <= 1000。
　　对于 80% 的评测用例，1 <= n <= 100000。
　　对于所有评测用例，1 <= n <= 1000000。
C++




*/
#include <iostream>
#include <vector>

using namespace std;

int countIncreaseNum(int n)
{
	int res = 9;
	for(int i = 10; i <= n; ++i)
	{
		int ret = i;
		vector<int> v;
		v.clear();
		while(ret)
		{
			v.push_back(ret % 10);
			ret /= 10;
		}
		int flag = 0;
		for(int i = v.size() - 1; i > 0; --i)
		{
			if(v[i] > v[i - 1])
				flag = 1;
		}
		if(flag == 0)
			++res;
	}
	
	return res;
}
int main()
{
	int n = 0;
	while(cin >> n)
	{
		int res = 0;
		if(n >= 10)
			res = countIncreaseNum(n);
		else
			res = n;
		
		cout << res << endl;
	}
	
	return 0;
}
