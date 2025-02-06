#include <bits/stdc++.h>
using namespace std;
int mod(int a)
{
    return (a > 0) ? a : a * (-1);
}
void solve()
{
    int n;
    cin >> n;
    int temp;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        ans = __gcd(ans, mod(temp - i - 1));
    }
    cout << ans << endl;
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