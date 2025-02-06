#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n, d;
    cin >> n >> d;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    int maxq = 1, currq = 1;
    for (int i = 1; i < n; i++)
    {
        if (v[i] - v[i - 1] <= d)
            currq++;
        else
        {
            currq = 1;
        }
        maxq = max(maxq, currq);
    }
    cout << n - maxq << endl;
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