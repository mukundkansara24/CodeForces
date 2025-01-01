#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m, temp;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        cin >> m;
        for (int j = 0; j < m; j++)
        {
            cin >> temp;
            v.push_back(temp);
        }
        int cnt = 0;
        sort(v.begin(), v.end());
        for (int j = 0; j < m - 1; j++)
        {
            if (v[j + 1] - v[j] <= 1)
            {
                cnt++;
            }
        }
        if (m - cnt <= 1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
        v.erase(v.begin(), v.end());
    }
    return 0;
}