#include <bits/stdc++.h>
using namespace std;
bool Right(int **arr, int n, int x, int y)
{
    bool ch = false;
    for (int i = 0; i < n; i++)
    {
        if (arr[i][0] > x)
        {
            if (arr[i][1] == y)
            {
                return true;
            }
        }
    }
    return false;
}
bool Left(int **arr, int n, int x, int y)
{
    bool ch = false;
    for (int i = 0; i < n; i++)
    {
        if (arr[i][0] < x)
        {
            if (arr[i][1] == y)
            {
                return true;
            }
        }
    }
    return false;
}
bool Up(int **arr, int n, int x, int y)
{
    bool ch = false;
    for (int i = 0; i < n; i++)
    {
        if (arr[i][1] > y)
        {
            if (arr[i][0] == x)
            {
                return true;
            }
        }
    }
    return false;
}
bool Down(int **arr, int n, int x, int y)
{
    bool ch = false;
    for (int i = 0; i < n; i++)
    {
        if (arr[i][1] < y)
        {
            if (arr[i][0] == x)
            {
                return true;
            }
        }
    }
    return false;
}
int Count(int **arr, int n)
{
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (Left(arr, n, arr[i][0], arr[i][1]) && Right(arr, n, arr[i][0], arr[i][1]) && Up(arr, n, arr[i][0], arr[i][1]) && Down(arr, n, arr[i][0], arr[i][1]))
        {
            cnt++;
        }
    }
    return cnt;
}
int main()
{
    int n;
    cin >> n;
    int **arr = new int *[n];
    for (int i = 0; i < n; i++)
    {
        arr[i] = new int[2];
        for (int j = 0; j < 2; j++)
        {
            cin >> arr[i][j];
        }
    }
    cout << Count(arr, n) << endl;
    return 0;
}