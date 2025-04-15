#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int ans = INT_MAX;
    if (k == 4)
    {
        int cnt1 = 0, cnt2 = 0;
        for (int i = 0; i < n; i++)
        {
            int s = k - v[i] % k;
            if (s == k)
                s = 0;
            if (s == 1 || s == 3)
                cnt1++;
            else if (s == 2)
                cnt2++;
            ans = min(ans, s);
        }
        if (cnt2 >= 2)
        {
            cout << 0 << endl;
        }
        else if(cnt2 >= 1 && cnt1 >= 1 && ans >= 1)
        {
            cout << 1 << endl;
        }
        else if (cnt1 >= 2 && ans > 2)
        {
            cout << 2 << endl;
        }
        else
            cout << ans << endl;
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            int s = k - v[i] % k;
            if (s == k)
                s = 0;
            ans = min(ans, s);
        }
        if (ans == k)
        {
            cout << 0 << endl;
        }
        else
            cout << ans << endl;
    }
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