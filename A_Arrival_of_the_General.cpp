#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        // cout << "arr[" << " " << i << "] = " << arr[i] << endl;
    }
    int min = arr[0], max = arr[0], mx = 0, mi = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
            mx = i;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] <= min)
        {
            // cout << "min  = " << min << endl;
            min = arr[i];
            mi = i;
        }
    }
    if (mx > mi)
    {
        cout << (mx + (n - mi - 1) - 1) << endl;
        exit(0);
    }
    // cout << "mx = " << mx << " mi = " << mi << endl;
    cout << (mx + (n - mi - 1)) << endl;
    return 0;
}