#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a, b, c;
    cin >> a >> b >> c;
    sort(c.begin(), c.end());
    a = a + b;
    sort(a.begin(), a.end());
    // cout << c << endl;
    if (a == c)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}