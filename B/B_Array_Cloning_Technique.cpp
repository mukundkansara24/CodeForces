#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n, temp;
    cin >> n;
    unordered_map<int, int> mpp;
    int maxf = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        mpp[temp]++;
        maxf = max(mpp[temp], maxf);
    }
    int cnt = 0;
    while (maxf < n)
    {
        if (n - maxf > maxf)
        {
            cnt += 1 + maxf;
            maxf *= 2;
        }
        else
        {
            cnt += 1 + n - maxf;
            maxf = n;
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