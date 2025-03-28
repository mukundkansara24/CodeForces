#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n, k, temp;
    cin >> n >> k;
    long long mini = 0, maxi = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        if (temp % k == 0)
            mini += temp / k;
        else
            mini += temp / k + 1;
        maxi += temp;
    }
    if (maxi % k == 0)
        maxi /= k;
    else
        maxi = maxi / k + 1;
    cout << maxi << " " << mini << endl;
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