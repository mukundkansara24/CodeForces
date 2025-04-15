#include <bits/stdc++.h>
using namespace std;
void solve()
{
    string s;
    cin >> s;
    int n = s.length();
    int c1 = 0, c0 = 0;
    for(int i = 0; i < n; i++)
    {
        if(s[i] == '1')
            c1++;
        else
            c0++;
    }
    int i;
    for(i = 0; i < n; i++)
    {
        if(s[i] == '0' && c1 > 0)
            c1--;
        else if(s[i] == '1' && c0 > 0)
            c0--;
        else
            break;
    }
    cout << s.length() - i << endl;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    while(n--)
    {
        solve();
    }
    return 0;
}