#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for(int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    bool ch = 1;
    for(int i = 1; i < n; i++)
    {
        if(v[i] >= v[i-1])
            ch*=1;
        else
            ch = 0;
    }
    if(k==1 && !ch)
        cout << "NO" << endl;
    else
        cout << "YES" << endl;
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