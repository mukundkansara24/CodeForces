#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n, x;
    cin >> n >> x;
    vector<int>v(n);
    cin >> v[0];
    int diff = v[0];
    for(int i = 1; i < n; i++)
    {
        cin >> v[i];
        diff = max(v[i]-v[i-1],diff);
    }
    diff = max(2*(x-v[n-1]),diff);
    cout << diff << endl;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    while(n--)
        solve();
    return 0;
}