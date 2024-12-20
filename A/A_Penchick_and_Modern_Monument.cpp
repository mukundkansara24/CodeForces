#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int **arr = new int *[n];
    int s, cnt;
    for (int i = 0; i < n; i++)
    {
        cnt = 0;
        cin >> s;
        arr[i] = new int[s];
        for (int j = 0; j < s; j++)
        {
            cin >> arr[i][j];
            if (j > 0)
            {
                if (arr[i][j] < arr[i][j - 1])
                    cnt++;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}