#include <bits/stdc++.h>
using namespace std;
int Modulo(int a)
{
    if (a < 0)
        return (-1) * a;
    else
        return a;
}
void Calculate(int *arr, int n)
{
    int *dif = new int[n];
    for (int i = 0; i < n; i++)
    {
        if (i + 1 == n)
        {
            dif[n - 1] = Modulo(arr[n - 1] - arr[0]);
            break;
        }
        dif[i] = Modulo(arr[i + 1] - arr[i]);
    }
    int f = 1, min = dif[0];
    for (int i = 0; i < n; i++)
    {
        // cout << "dif: " << dif[i] << " at i " << i << endl;
        if (dif[i] < min)
        {
            min = dif[i];
            f = i + 1;
        }
    }
    int s = f + 1;
    if (s == n + 1)
        s = 1;
    cout << f << " " << s << endl;
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