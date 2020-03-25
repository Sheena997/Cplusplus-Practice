/*
��������
���������� a[1], a[2], ..., a[n] �У���������±� i, j, k ���� 0<i<j<k<n+1 �� a[i]<a[j]<a[k]����� a[i], a[j], a[k] Ϊһ�������Ԫ�飬a[j]Ϊ������Ԫ������ġ�
��������һ�����У������������ж��ٸ�Ԫ�ؿ����ǵ�����Ԫ������ġ�
�����ʽ
��������ĵ�һ�а���һ������ n��
�����ڶ��а��� n ������ a[1], a[2], ..., a[n]�����ڵ��������ÿո�ָ�����ʾ���������С�
�����ʽ
�������һ�а���һ����������ʾ�𰸡�
��������
5
1 2 5 3 5
�������
2
����˵��
����a[2] �� a[4] ��������Ԫ������ġ�
����������ģ��Լ��
�������� 50% ������������2 <= n <= 100��0 <= �����е��� <= 1000��
����������������������2 <= n <= 1000��0 <= �����е��� <= 10000��
C++
}
*/ 
#include <iostream>
#include <vector>

using namespace std;

bool isTrue(vector<int> v, int i)
{
	for(int j = i + 1; j < v.size(); ++j)
	{
		if(v[i] < v[j])
			return true;
	}
	
	return false;
}
int theIncreaseCenter(vector<int> v)
{
	int res = 0, min = v[0];
	for(int i = 1; i < v.size() - 1; ++i)
	{
		if(v[i] < min)
			min = v[i];
		if(min < v[i] && isTrue(v, i)) 
			++res;
	}
	
	return res;
}
int main()
{
	int n = 0;
	while(cin >> n)
	{
		vector<int> v(n, 0);
		for(int i = 0; i < n; ++i)
			cin >> v[i];
		int res = theIncreaseCenter(v);		
		
		cout << res << endl;
	}
	
	return 0;
}
