#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, a, b;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int cnt = 0;
        cin >> a >> b;
        if (b >= a)
        {
            int d = b / 10 - a / 10;
            a = d * 10 + a;
            if (a >= b)
                cout << d << endl;
            else
                cout << d + 1 << endl;
        }
        else
        {
            int d = a / 10 - b / 10;
            a = a - d * 10;
            if (a <= b)
                cout << d << endl;
            else
                cout << d + 1 << endl;
        }
    }
    return 0;
}