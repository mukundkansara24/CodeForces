#include <bits/stdc++.h>
using namespace std;
void solve()
{
    long long int n;
    cin >> n;
    long int j = 2;
    while (n % j == 0)
    {
        j++;
    }
    cout << j - 1 << endl;
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