#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    int x = 1;
    for (int i = k; i <= n; i += k)
    {
        v[i - 1] = x;
        x++;
    }
    for (int i = 0; i < n; i++)
    {
        if (v[i] == 0)
        {
            v[i] = x;
            x++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
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