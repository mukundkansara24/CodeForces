#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, cnt = 0;
    cin >> n;
    int **arr = new int *[n];
    for (int i = 0; i < n; i++)
    {
        arr[i] = new int[2];
        cin >> arr[i][0] >> arr[i][1];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[i][0] == arr[j][1])
                cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}