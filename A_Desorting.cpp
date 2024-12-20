#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int m;
        cin >> m;
        int *arr = new int[m];
        for (int j = 0; j < m; j++)
        {
            cin >> arr[j];
        }
        int diff = arr[1] - arr[0], ind = 0;
        for (int j = 0; j < m - 1; j++)
        {
            if (diff > arr[j + 1] - arr[j])
            {
                diff = arr[j + 1] - arr[j];
                ind = j;
            }
        }
        if (diff < 0)
            cout << 0 << endl;
        else
            cout << diff / 2 + 1 << endl;
        delete[] arr;
    }
    return 0;
}