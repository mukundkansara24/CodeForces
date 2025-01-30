#include <bits/stdc++.h>
using namespace std;
void solve()
{
    long a, n;
    long b;
    cin >> a >> b >> n;
    vector<long> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    int i = 0;
    long long cnt = 0;
    while (i < n)
    {
        cout << "cnt = " << cnt << endl;
        if (b == 1)
        {
            b = min(b + v[i++], a);
        }
        cnt += b - 1;
        b = 1;
    }
    cout << cnt + b << endl;
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