#include <bits/stdc++.h>
using namespace std;
int MinFind(int *arr, int n)
{
    int m = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < m)
            m = arr[i];
    }
    return m;
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
    int ans = MinFind(arr, n);
    int cnt = 0;
    int ind;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == ans)
        {
            cnt++;
            ind = i;
        }
    }
    if (cnt > 1)
        cout << "Still Rozdil" << endl;
    else
        cout << ind+1 << endl;
    return 0;
}