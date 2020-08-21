#include <iostream>
#include <string>

using namespace std;

int gcd(int m, int n)
{
    if(n == 0)
        return m;
    return gcd(n, m % n);
}
int main()
{
    string str;
    getline(cin, str);
    int a = str[0], b = str[2], c = str[6], d = str[8];
    char s1 = str[4];
    int res1 = 0, res2 = 0;
    int flag = 0;
    if(s1 == '+')
    {
        if(b == d)
        {
            res2 = (b - '0');
            res1 = (a - '0') + (c - '0');
        }
        else
        {
            res2 = (b - '0') * (d - '0');
            res1 = (a - '0') * (d - '0') + (c - '0') * (b - '0');
        }

    }
    else if(s1 == '-')
    {
        if(b == d)
        {
            res2 = (b - '0');
            res1 = (a - '0') - (c - '0');
        }
        else
        {
            res2 = (b - '0') * (d - '0');
            res1 = (a - '0') * (d - '0') - (c - '0') * (b - '0');
        }
    }
    else if(s1 == '*')
    {
        res1 = (a - '0') * (c -'0');
        res2 = (b - '0') * (d - '0');
    }
    else if(s1 == '/')
    {
        res1 = (a - '0') * (d - '0');
        res2 = (b - '0') * (c - '0');
    }
    if(res1 < 0)
    {
        flag = 1;
        res1 = -res1;
    }
    int maxNum = gcd(res1, res2);
    if(flag == 1)
        cout << "-";
    if(res1 / maxNum == 0)
        cout << "0" << endl;
    else if(res2 / maxNum == 1)
        cout << to_string(res1 / maxNum) << endl;
    else
        cout << to_string(res1 / maxNum) << "/" << to_string(res2 / maxNum) << endl;
    
    return 0;
}