#include <bits/stdc++.h>
using namespace std;
bool Check(int arr[], bool *ch, int n, int val)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == val && ch[i] == false)
        {
            // cout << "in Check " << i << endl;
            ch[i] = true;
            return true;
        }
    }
    return false;
}
void MaxMin(int *arr, int n)
{
    int c0 = 0, c1 = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 1)
            c1++;
        else
            c0++;
    }
    bool *ch = new bool[n];
    for (int i = 0; i < n; i++)
    {
        ch[i] = false;
    }
    int maxL = 0, minL = 0;
    for (int i = 0; i < n / 2; i++)
    {
        // cout << "In Max " << endl;
        if (Check(arr, ch, n, 0))
        {
            if (Check(arr, ch, n, 1))
            {
                maxL++;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        ch[i] = false;
    }
    for (int i = 0; i < n / 2; i++)
    {
        // cout << "In min " << endl;
        if (Check(arr, ch, n, 0))
        {
            if (Check(arr, ch, n, 0))
            {
                minL = minL + 0;
            }
            else
            {
                minL++;
            }
        }
        else if (Check(arr, ch, n, 1))
        {
            if (Check(arr, ch, n, 1))
            {
                minL = minL + 0;
            }
            else
            {
                minL++;
            }
        }
        // else
        //     minL++;
    }
    cout << minL << " " << maxL << endl;
}
int main()
{
    int t, n;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> n;
        int *arr = new int[2 * n];
        for (int j = 0; j < 2 * n; j++)
        {
            cin >> arr[j];
        }
        // Minimum(arr, 2 * n);
        MaxMin(arr, 2 * n);
    }
    return 0;
}