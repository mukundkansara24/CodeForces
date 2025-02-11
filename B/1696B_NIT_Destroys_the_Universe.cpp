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
    int l = -1, r = -1;
    for (int i = 0; i < n; i++)
    {
        if (v[i] != 0)
        {
            if (l == -1 && r == -1)
                l = r = i;
            else
                r = i;
        }
    }
    if (l == -1 && r == -1)
    {
        cout << 0 << endl;
        return;
    }
    for (int i = l; i <= r; i++)
    {
        if (v[i] == 0)
        {
            cout << 2 << endl;
            return;
        }
    }
    cout << 1 << endl;
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