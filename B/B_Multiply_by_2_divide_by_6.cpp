#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    int cnt = 0;
    while (n != 1)
    {
        cnt++;
        if (n % 6 == 0)
        {
            n /= 6;
            continue;
        }
        else
            n *= 2;
        if (n % 6 != 0 && n > 6)
        {
            cout << -1 << endl;
            return;
        }
    }
    cout << cnt << endl;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    while (n--)
    {
        solve();
    }
    return 0;
}