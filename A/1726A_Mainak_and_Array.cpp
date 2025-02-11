#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int ans = INT_MIN;
    // Consider only A1
    for (int i = 0; i < n - 1; i++)
    {
        ans = max(ans, v[n - 1] - v[i]);
    }
    // Consider only An
    for (int i = 1; i < n; i++)
    {
        ans = max(ans, v[i] - v[0]);
    }
    // Consider both A1 and An
    for (int i = 0; i < n; i++)
    {
        ans = max(ans, v[i] - v[(i + 1) % n]);
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