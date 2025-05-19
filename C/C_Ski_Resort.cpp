#include <bits/stdc++.h>
using namespace std;
long long Func(int a, int k, int n)
{
    if (a < k)
        return 0;
    long long cnt = 1;
    long long ans = 0;
    for (int i = 0; i < a - k + 1; i++)
    {
        ans += cnt;
        cnt++;
    }
    return ans;
}
void solve()
{
    long long n, k, t;
    cin >> n >> k >> t;
    vector<long long> v(n);
    for (long long i = 0; i < n; i++)
        cin >> v[i];
    long long i = 0, j = 0;
    long long cnt = 0;
    while (j < n)
    {
        if (v[j] <= t)
        {
            if (j + 1 == n)
                cnt += Func(j - i + 1, k, n);
            j++;
        }
        else
        {
            cnt += Func(j - i, k, n);
            j++;
            i = j;
        }
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
    {
        solve();
    }
    return 0;
}