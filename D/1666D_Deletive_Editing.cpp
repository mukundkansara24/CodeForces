#include <bits/stdc++.h>
using namespace std;
void solve()
{
    string a, b;
    cin >> a >> b;
    int n1 = a.length(), n2 = b.length();
    unordered_map<char, int> mpp1, mpp2;
    for (auto x : a)
    {
        mpp1[x]++;
    }
    for (auto x : b)
    {
        mpp2[x]++;
    }
    int i = 0, j = 0;
    while (i < n1 && j < n2)
    {
        // cout << "a = " << a[i] << " b = " << b[j] << endl;
        if (a[i] == b[j])
        {
            if (mpp1[a[i]] == mpp2[b[j]])
            {
                mpp2[b[j]]--;
                j++;
            }
            else if (mpp1[a[i]] < mpp2[b[j]])
                break;
        }
        mpp1[a[i]]--;
        i++;
    }
    // cout << "j = " << j << endl;
    if (j == n2)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
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