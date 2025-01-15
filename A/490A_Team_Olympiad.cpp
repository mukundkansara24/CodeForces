#include <bits/stdc++.h>
using namespace std;
int minimum(int a, int b, int c)
{
    if (a < b)
    {
        if (a < c)
            return a;
        else
            return c;
    }
    else
    {
        if (b < c)
            return b;
        else
            return c;
    }
}
int main()
{
    int n, temp;
    cin >> n;
    vector<int> v;
    unordered_map<int, int> s;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        if (temp == 1)
            s[1] += 1;
        else if (temp == 2)
            s[2] += 1;
        else
            s[3] += 1;
        v.push_back(temp);
    }
    bool *arr = new bool[n];
    for (int s = 0; s < n; s++)
    {
        arr[s] = 0;
    }
    int mini = minimum(s[1], s[2], s[3]);
    int i = 0;
    cout << mini << endl;
    while (i < mini)
    {
        int j = 0;
        bool i1 = 0, i2 = 0, i3 = 0;
        for (int k = 0; k < n; k++)
        {
            if (v[k] == 1 && !i1 && !arr[k])
            {
                cout << k + 1 << " ";
                i1 = 1;
                arr[k] = 1;
            }
            else if (v[k] == 2 && !i2 && !arr[k])
            {
                cout << k + 1 << " ";
                i2 = 1;
                arr[k] = 1;
            }
            else if (v[k] == 3 && !i3 && !arr[k])
            {
                cout << k + 1 << " ";
                i3 = 1;
                arr[k] = 1;
            }
        }
        cout << endl;
        i++;
    }

    return 0;
}