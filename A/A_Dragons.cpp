#include <bits/stdc++.h>
using namespace std;
void Sort(int **arr, int n)
{
    for (int i = 1; i < n; i++)
    {
        bool swapped = false;
        for (int j = 0; j < n - i; j++)
        {
            if (arr[j][0] > arr[j + 1][0])
            {
                swapped = true;
                swap(arr[j][0], arr[j + 1][0]);
                swap(arr[j][1], arr[j + 1][1]);
            }
        }
        if (!swapped)
            break;
    }
}
int main()
{
    int s, n;
    cin >> s >> n;
    int **arr = new int *[n];
    for (int i = 0; i < n; i++)
    {
        arr[i] = new int[2];
        cin >> arr[i][0] >> arr[i][1];
    }
    Sort(arr, n);
    for (int i = 0; i < n; i++)
    {
        if (arr[i][0] < s)
        {
            s += arr[i][1];
        }
        else
        {
            cout << "NO" << endl;
            exit(0);
        }
    }
    cout << "YES" << endl;
    return 0;
}