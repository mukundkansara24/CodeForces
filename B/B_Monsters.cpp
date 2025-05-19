#include <bits/stdc++.h>
using namespace std;
bool comp(pair<int, int> a, pair<int, int> b)
{
    if (a.first == b.first)
        return a.second < b.second;
    return a.first > b.first;
}
void solve()
{
    int n, k;
    cin >> n >> k;
    vector<pair<int, int>> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i].first;
        if (v[i].first % k != 0)
            v[i].first = v[i].first % k;
        else
            v[i].first = k;
        v[i].second = i;
    }
    sort(v.begin(), v.end(), comp);
    for (int i = 0; i < n; i++)
    {
        cout << v[i].second + 1 << " ";
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
    {
        solve();
    }
    return 0;
}