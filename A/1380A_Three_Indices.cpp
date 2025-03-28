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
    for (int i = 1; i < n - 1; i++)
    {
        if (v[i - 1] < v[i] && v[i + 1] < v[i])
        {
            cout << "YES" << endl;
            cout << i << " " << i + 1 << " " << i + 2 << " " << endl;
            return;
        }
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
    {
        solve();
    }
    return 0;
}