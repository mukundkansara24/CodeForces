#include <bits/stdc++.h>
using namespace std;
void Sort(int *arr)
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = i + 1; j < 3; j++)
        {
            if (arr[i] > arr[j])
            {
                swap(arr[i], arr[j]);
            }
        }
    }
    cout << arr[2]-arr[0] << endl;
}
int main()
{
    int arr[3];
    for (int i = 0; i < 3; i++)
    {
        cin >> arr[i];
    }
    Sort(arr);
    return 0;
}