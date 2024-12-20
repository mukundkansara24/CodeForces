#include <iostream>
using namespace std;
int Child(int arr[], int n, int m)
{
    int s;
    while (true)
    {
        bool a = false;
        int i = 0;
        while (i < n)
        {
            if (arr[i] <= 0)
            {
                i++;
            }
            else
            {
                arr[i] = arr[i] - m;
                s = i;
                a = true;
                // cout << "i = " << i << endl;
                i++;
            }
        }
        if (a == false)
        {
            return (s + 1);
        }
    }
    return -1;
}
int main()
{
    int n, m;
    cin >> n >> m;
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << Child(arr, n, m) << endl;
    return 0;
}