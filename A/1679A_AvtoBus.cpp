#include <bits/stdc++.h>
using namespace std;
void solve()
{
    long long n;
    cin >> n;
    if (n % 2 != 0 || n < 4)
        cout << -1 << endl;
    else
    {
        long long int max, min;
        max = n / 4;
        if (n % 6 > 0)
            min = n / 6 + 1;
        else
            min = n / 6;
        cout << min << " " << max << endl;
    }
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