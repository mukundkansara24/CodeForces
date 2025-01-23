#include <bits/stdc++.h>
using namespace std;
void Solve()
{
    int x, n, m;
    cin >> x >> n >> m;
    int h = 0;
    while (x > 0 && n > 0)
    {
        // cout << x << " " << n << " " << m << endl;
        h = x / 2 + 10;
        if (h < x)
        {
            x = h;
            n--;
        }
        else
            break;
    }
    h = 0;
    while (x > 0 && m > 0)
    {
        // cout << x << " " << n << " " << m << endl;
        h = x - 10;
        if (h < x)
        {
            x = h;
            m--;
        }
        else
            break;
    }
    if (x > 0)
        cout << "NO" << endl;
    else
        cout << "YES" << endl;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    while (n--)
    {
        Solve();
    }
    return 0;
}