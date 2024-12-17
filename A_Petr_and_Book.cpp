#include <bits/stdc++.h>
using namespace std;
int Calculate(int *arr, int page)
{
    while (true)
    {
        for (int i = 0; i < 7; i++)
        {
            if (page <= 0)
            {
                if (i == 0)
                    return 7;
                else
                    return i;
            }
            else
            {
                page = page - arr[i];
            }
        }
    }
    return -1;
}
int main()
{
    int page;
    cin >> page;
    int arr[7];
    for (int i = 0; i < 7; i++)
    {
        cin >> arr[i];
    }
    cout << Calculate(arr, page) << endl;
    return 0;
}