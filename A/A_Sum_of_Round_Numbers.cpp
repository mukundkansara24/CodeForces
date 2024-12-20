#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, cnt, s;
    string a;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cnt = 0;
        cin >> a;
        // cout << a << endl;
        s = a.length();
        for (int j = 0; j < s; j++)
        {
            if (a[j] != '0')
            {
                cnt++;
            }
        }
        cout << cnt << endl;
        for (int j = 0; j < s; j++)
        {
            if (a[j] != '0')
            {
                cout << (a[j] - '0') * pow(10, s - j - 1) << " ";
            }
        }
        cout << endl;
    }
    return 0;
}