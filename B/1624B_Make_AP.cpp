#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int a, b, c;
    cin >> a >> b >> c;
    int newa = b - (c - b);
    if (newa >= a && newa % a == 0)
    {
        cout << "YES" << endl;
        return;
    }

    int newb = a + (c - a) / 2;
    if (newb >= b && newb % b == 0 && (c-a)%2 == 0)
    {
        cout << "YES" << endl;
        return;
    }

    int newc = a + 2 * (b - a);
    if (newc >= c && newc % c == 0)
    {
        cout << "YES" << endl;
        return;
    }
    cout << "NO" << endl;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    while (n--)
        solve();
    return 0;
}