#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    int *v = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int cnt = 0;
    for (int i = n - 1; i > 0; i--)
    {
        if (v[i - 1] >= v[i] && v[i - 1] > 0)
        {
            // cout << "vi " << v[i] << " vi-1 " << v[i - 1] << endl;
            v[i - 1] /= 2;
            i++, cnt++;
            // continue;
        }
        if (v[i] == v[i - 1])
        {
            // cout << "inside termination ";
            // cout << "vi " << v[i] << " vi-1 " << v[i - 1] << endl;
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
        solve();
    return 0;
}