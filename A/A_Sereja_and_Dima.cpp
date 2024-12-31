#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, temp;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        v.push_back(temp);
    }
    int i = 0, j = n - 1;
    int s = 0, d = 0;
    int cnt = 0;
    while (i <= j)
    {
        if (cnt % 2 == 0)
        {
            if (v[i] > v[j])
            {
                s += v[i];
                i++;
            }
            else
            {
                s += v[j];
                j--;
            }
        }
        else
        {
            if (v[i] > v[j])
            {
                d += v[i];
                i++;
            }
            else
            {
                d += v[j];
                j--;
            }
        }
        cnt++;
    }
    cout << s << " " << d << endl;
    return 0;
}