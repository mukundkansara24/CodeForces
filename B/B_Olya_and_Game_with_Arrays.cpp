#include <bits/stdc++.h>
using namespace std;
// void Print(vector<int>arr)
// {
//     cout << "Printing Array: ";
//     for(int i = 0; i < arr.size(); i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
// }
void solve()
{
    int t, n, mini, mini2, temp;
    cin >> t;
    vector<int> miniv, miniv2;
    vector<vector<int>> v(t);
    for (int i = 0; i < t; i++)
    {
        cin >> n;
        for (int j = 0; j < n; j++)
        {
            cin >> temp;
            v[i].push_back(temp);
        }
        sort(v[i].begin(), v[i].end());
        miniv.push_back(v[i][0]);
        miniv2.push_back(v[i][1]);
    }
    mini = INT_MAX;
    int ind = 0;
    for (int i = 0; i < t; i++)
    {
        if (mini > miniv2[i])
        {
            mini = miniv2[i];
            ind = i;
        }
    }
    long long sum = 0;
    for (int i = 0; i < t; i++)
    {
        if (i != ind)
            sum += miniv2[i];
    }
    mini = miniv[0];
    for(int i = 0; i < t; i++)
    {
        if(mini > miniv[i])
            mini = miniv[i];
    }
    sum+=mini;
    cout << sum << endl;
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