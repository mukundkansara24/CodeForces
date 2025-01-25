#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    string a;
    cin >> a;
    int i = 0;
    if (a[0] == '9')
        i++;
    for (; i < a.length(); i++)
    {
        if (a[i] > '4')
        {
            int b = a[i] - '0';
            b = b - 9;
            b = b < 0 ? b * (-1) : b;
            a[i] = b + '0';
        }
    }
    cout << a << endl;
    return 0;
}