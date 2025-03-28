#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int k = 0; k < n; k++)
    {
        for (int i = 1; i < n - 1; i++)
        {
            if (a[i] > a[i - 1] && a[i] > a[i + 1])
                swap(a[i], a[i + 1]);
        }
    }
    bool ch = 1;
    for (int i = 0; i < n - 1; i++)
    {
        // cout << "a[i] " << a[i] << endl;
        if (a[i] < a[i + 1])
            ch *= 1;
        else
            ch = 0;
    }
    if (ch)
        cout << "YES" << endl;
    else
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