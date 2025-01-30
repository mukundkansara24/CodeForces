#include <bits/stdc++.h>
using namespace std;
void solve()
{
    long long n, k, x;
    cin >> n >> k >> x;
    long long max = n;
    long long min = 1;
    long long mans = 0, mians = 0;
    for (long i = 0; i < k; i++)
    {
        mans += max;
        max--;
    }
    mians = k * (k + 1) / 2;
    // cout << "max = " << mans << " min = " << mians << endl;
    if (x >= mians && x <= mans)
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