#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int i = 0, j = 0;
    int cnt = 0, dot = 0, ans = 0;
    while (j < n)
    {
        if (s[j] == '#')
        {
            ans = max(cnt, ans);
            cnt = 0;
            j++;
            i = j;
        }
        else if (s[j] == '.')
        {
            dot++;
            // cout << "b " << j-i+1 << endl;
            cnt = max(cnt, j-i+1);
            j++;
        }
    }
    ans = max(ans, cnt);
    if(ans > 2)
    {
        cout << 2 << endl;
    }
    else
        cout << dot << endl;
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