#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    vector<int> prev(n);
    long int sum = 0;
    cin >> v[0];
    prev[0] = v[0];
    for (int i = 1; i < n; i++)
    {
        cin >> v[i];
        prev[i] = prev[i - 1] + v[i];
    }
    int l, r, b;
    for (int i = 0; i < k; i++)
    {
        cin >> l >> r >> b;
        sum = prev[n - 1];
        sum += (r - l + 1) * b;
        sum = sum - prev[r - 1] + prev[l - 1] + v[l - 1];
        if (sum & 1)
            cout << "yes" << endl;
        else
            cout << "no" << endl;
    }
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