#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    char a;
    string st = "";
    unordered_map<char, int> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        st = st + a;
        mp[a]++;
    }
    int maxi = INT_MIN, mini = INT_MAX;
    char mat, mit;
    for (auto x : mp)
    {
        if (x.second > maxi)
        {
            mat = x.first;
            maxi = x.second;
        }
    }
    // cout << "maxi = " << maxi << endl;
    for (auto x : mp)
    {
        if (x.second < mini)
        {
            mit = x.first;
            mini = x.second;
        }
    }
    // cout << "mini = " << mini << endl;
    if (maxi == mini)
    {
        char temp = st[0];
        for (int i = 1; i < n; i++)
        {
            if (st[i] != temp)
            {
                st[i] = temp;
                break;
            }
        }
    }
    else
    {
        int ma = 0, mi = 0;
        for (int i = 0; i < n; i++)
        {
            if (st[i] == mit)
            {
                mi = i;
                break;
            }
        }
        st[mi] = mat;
    }
    cout << st << endl;
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