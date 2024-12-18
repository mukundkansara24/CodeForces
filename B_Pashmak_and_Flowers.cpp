#include <bits/stdc++.h>
using namespace std;
long long Max(long long *arr, long long n)
{
    long long max = arr[0];
    for (long long i = 0; i < n; i++)
    {
        if (arr[i] > max)
            max = arr[i];
    }
    return max;
}
long long Min(long long *arr, long long n)
{
    long long min = arr[0];
    for (long long i = 0; i < n; i++)
    {
        if (arr[i] < min)
            min = arr[i];
    }
    return min;
}
int main()
{
    long long n;
    cin >> n;
    long long *arr = new long long[n];
    for (long long i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    long long max = Max(arr, n), min = Min(arr, n);
    long long diff = max - min;
    long long cntM = 0, cntm = 0;
    for (long long i = 0; i < n; i++)
    {
        if (arr[i] == max)
            cntM++;
    }
    for (long long i = 0; i < n; i++)
    {
        if (arr[i] == min)
            cntm++;
    }
    if (diff == 0)
        cout << diff << " " << cntm * (cntm - 1) / 2 << endl;
    else
        cout << diff << " " << cntM * cntm << endl;
    return 0;
}