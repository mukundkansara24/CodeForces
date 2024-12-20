#include <iostream>
#include <cmath>
using namespace std;
bool Perpendicular(int a0, int a1, int b0, int b1, int c0, int c1, int d0, int d1)
{
    int s1 = (b1 - a1) / (b0 - a0);
    int s2 = (c1 - d1) / (c0 - d0);
    if (s1 * s2 == (-1))
        return true;
    else
        return false;
}
int Modulo(int a)
{
    if (a < 0)
        return (-1) * a;
    else
        return a;
}
int Length(int a0, int a1, int b0, int b1)
{
    return sqrt((a0 - b0) * (a0 - b0) + (a1 - b1) * (a1 - b1));
}
int **Calculate(int *arr)
{
    int x = arr[0], y = arr[1], z = arr[2];
    bool ch;
    while (true)
    {
        ch = true;
        int a0 = x, a1 = y;
        int b0 = x, b1 = y;
        int c0 = x, c1 = y;
        int d0 = x, d1 = y;
        if (Length(a0, a1, b0, b1) >= z && Length(c0, c1, d0, d1) >= z)
        {
            if (Perpendicular(a0, a1, b0, b1, c0, c1, d0, d1))
            {
                int f[4];
                int s[4];
                f[0] = a0, f[1] = a1;
                f[2] = b0, f[3] = b1;
                s[0] = c0, s[1] = c1;
                s[2] = d0, s[3] = d1;
                int **ans = new int *[4];
                for (int j = 0; j < 4; j++)
                {
                    ans[0][j] = f[j];
                }
                for (int j = 0; j < 4; j++)
                {
                    ans[1][j] = s[j];
                }
            }
        }
    }
}
int main()
{
    int t;
    cin >> t;
    for (int k = 0; k < t; k++)
    {
        int arr[3];
        for (int i = 0; i < 3; i++)
        {
            cin >> arr[i];
        }
        int **ans = Calculate(arr);
    }
    return 0;
}