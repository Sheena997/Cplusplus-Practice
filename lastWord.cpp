/*
�����ַ������һ�����ʵĳ��ȣ������Կո����
OJ���ӣ�https://www.nowcoder.com/practice/8c949ea5f36f422594b306a2300315da?tpId=37&&tqId=21224&rp=5&ru=/activity/oj&qru=/ta/huawei/question-ranking
*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    size_t pos = s.rfind(' ');
    if(pos != string::npos)
        cout << s.size() - pos - 1 << endl;
    else
        cout << s.size() << endl;
}