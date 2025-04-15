#include <bits/stdc++.h>
using namespace std;
void solve()
{
    string s;
    cin >> s;
    int i = 0, cnt = 0;
    while(!s.empty() && i < s.length()-1)
    {
        // cout << "s = " << s << endl;
        if((s[i] == '0' && s[i+1] == '1') || (s[i] == '1' && s[i+1] == '0'))
        {
            cnt++;
            s.erase(i,2);
            // cout << s << endl;
            if(i > 0)
            {
                i = i-1;
            }
            else
                i = 0;
        }
        else
        {
            i++;
        }
    }
    // cout << cnt << endl;
    if(cnt&1)
    {
        cout << "DA" << endl;
    }
    else
        cout << "NET" << endl;
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