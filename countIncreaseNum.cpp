/*
��������
����һ������������κ�һ����λ�������ұ����ڵ���λ�����Ϊһ����λ��������������1135��һ����λ������������1024����һ����λ����������
�������������� n������������ 1 �� n ���ж��ٸ���λ����������
�����ʽ
��������ĵ�һ�а���һ������ n��
�����ʽ
�������һ�а���һ����������ʾ�𰸡�
��������
30
�������
26
����������ģ��Լ��
�������� 40% ������������1 <= n <= 1000��
�������� 80% ������������1 <= n <= 100000��
����������������������1 <= n <= 1000000��
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
