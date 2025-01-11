#include <bits/stdc++.h>
using namespace std;
int ans(int *arr, int n)
{
    int max = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
            max = arr[i];
    }
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        cnt = cnt + max - arr[i];
    }
    return cnt;
}
int main()
{
    int n;
    cin >> n;
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << ans(arr, n) << endl;
    return 0;
}