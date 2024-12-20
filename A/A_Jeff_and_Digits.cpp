#include <bits/stdc++.h>
using namespace std;
void Calculate(int *arr, int n)
{
    bool ch = false;
    int cnt0 = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            cnt0++;
            ch = true;
        }
    }
    if (ch)
    {
        int cnt5 = 0;
        sort(arr, arr + n, greater<>());
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == 5)
                cnt5++;
        }
        if (cnt5 >= 9)
        {
            if (cnt5 % 9 == 0)
            {
                for (int i = 0; i < cnt5; i++)
                {
                    cout << 5;
                }
                for (int i = 0; i < cnt0; i++)
                {
                    cout << 0;
                }
            }
            else if (cnt5 > 9)
            {
                while (cnt5 % 9 != 0)
                {
                    cnt5--;
                }
                for (int i = 0; i < cnt5; i++)
                {
                    cout << 5;
                }
                for (int i = 0; i < cnt0; i++)
                {
                    cout << 0;
                }
            }
        }
        else
        {
            cout << 0 << endl;
        }
    }
    else
        cout << "-1" << endl;
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
    Calculate(arr, n);
    return 0;
}