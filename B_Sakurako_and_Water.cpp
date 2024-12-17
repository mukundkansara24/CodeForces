#include <iostream>
#include <array>
using namespace std;
int Counter(int **arr, int s)
{
    int cnt = 0;
    for (int i = 0; i < s; i++)
    {
        for (int j = 0; j < s; j++)
        {
            if (arr[i][j] < 0)
            {
                int k = 0;
                while (i + k < (s-1) && j + k < (s-1))
                {
                    // cout << i << j << endl;
                    arr[i + k][j + k] += 1;
                    k++, cnt++;
                }
            }
        }
    }
    return cnt;
}
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        int **arr = new int *[a];
        for (int j = 0; j < a; j++)
        {
            arr[j] = new int[a];
            for (int k = 0; k < a; k++)
            {
                cin >> arr[j][k];
            }
        }
        cout << Counter(arr, a) << endl;
        for (int k = 0; k < a; k++)
        {
            delete[] arr[k];
        }
        delete[] arr;
    }
    return 0;
}