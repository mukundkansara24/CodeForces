#include <bits/stdc++.h>
using namespace std;
bool comp(pair<int, int> a, pair<int, int> b)
{
    if (a.second == b.second)
        return a.first > b.first;
    return a.second < b.second;
}
void print(vector<pair<int, int>> a, int n)
{
    cout << "printing " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << a[i].first << " " << a[i].second << endl;
    }
    cout << "complete" << endl;
}
void solve()
{
    int n, k, ans = 0;
    cin >> n >> k;
    vector<pair<int, int>> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].first;
    }
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].second;
    }
    sort(a.begin(), a.end(), comp);
    long long cost = k, shared = 1;
    for (auto x : a)
    {
        long long canshare = x.first;
        long long sharedcost = x.second;

        if (sharedcost > k)
            break;
        if (canshare + shared > n)
        {
            cost += (n - shared) * sharedcost;
            shared = n;
            break;
        }
        else
        {
            cost += canshare * sharedcost;
            shared += canshare;
        }
    }
    cost += (n - shared) * k;
    cout << cost << endl;
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