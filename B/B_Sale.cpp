#include <bits/stdc++.h>
using namespace std;
bool isPresent(bool *arr, int i)
{
    if (arr[i] == true)
        return true;
    return false;
}
int main()
{
    int n;
    int m, cnt = 0;
    cin >> n >> m;
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] < 0)
            cnt++;
    }
    if (cnt > m)
    {
        bool *minind = new bool[n];
        int min, ans = 0, s;
        for (int i = 0; i < n; i++)
        {
            minind[i] = false;
        }
        for (int j = 0; j < m; j++)
        {
            min = INT_MAX;
            for (int i = 0; i < n; i++)
            {
                if (min > arr[i] && !isPresent(minind, i))
                {
                    min = arr[i];
                    s = i;
                }
            }
            cout << "arr[" << s << "]: " << arr[s] << endl;
            minind[s] = true;
            ans += min;
        }
        cout << (-1) * ans << endl;
    }
    else
    {
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] < 0)
            {
                cout << "arr[" << i << "]: " << arr[i] << endl;
                ans += arr[i];
            }
        }
        cout << (-1) * ans << endl;
    }
    return 0;
}