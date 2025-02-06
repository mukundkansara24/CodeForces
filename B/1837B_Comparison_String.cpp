#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<char> v(n);
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int maxi = 1, curr = 1;
    for (int i = 1; i < n; i++)
    {
        if (v[i] == v[i - 1])
            curr++;
        else
            curr = 1;
        maxi = max(curr, maxi);
    }
    cout << maxi+1 << endl;
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