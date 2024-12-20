#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m, temp;
    cin >> n >> m;
    vector<int> v;
    for (int i = 0; i < m; i++)
    {
        cin >> temp;
        v.push_back(temp);
        
    }
    int max = 0, min = 0;
    sort(v.begin(), v.end());
    int b = n;
    for (int i = 0; i < m && b != 0; i++)
    {
        int a = v[i];
        while (a != 0)
        {
            min = min + a;
            a--;
            b--;
        }
    }
    b = n;
    for (int i = m - 1; i >= 0 && b != 0; i--)
    {
        int a = v[i];
        while (a != 0)
        {
            max = max + a;
            a--;
            b--;
            if (a < v[i + 1])
                break;
        }
    }
    cout << max << " " << min << endl;
    return 0;
}