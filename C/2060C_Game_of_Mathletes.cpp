#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n, k, temp;
    cin >> n >> k;
    vector<int> v(n);
    unordered_map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        mp[v[i]] += 1;
    }
    int cnt = 0;
    int i = 0;
    while (i < n)
    {
        bool ch = false;
        if (mp[v[i]] > 0)
        {
            mp[v[i]]--;
            if (mp[k - v[i]] > 0)
            {
                ch = true;
                cnt++;
                mp[k - v[i]] -= 1;
            }
            if (!ch)
                mp[v[i]]++;
        }
        i++;
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