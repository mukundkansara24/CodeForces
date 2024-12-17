#include <iostream>
using namespace std;
int Calculate(int arr[], int n)
{
    int *ans = new int[n];
    int len = n;
    for (int i = 1; i < n; i++)
    {
        ans[i] = n - i;
        if (ans[i] == arr[i])
        {
            len+=i;
            n+=i;
        }
    }
    return len;
}
int main()
{
    int t, n;
    cin >> t;
    for (int k = 0; k < t; k++)
    {
        cin >> n;
        int *arr = new int[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        cout << Calculate(arr, n) << endl;
        delete[] arr;
    }
    return 0;
}