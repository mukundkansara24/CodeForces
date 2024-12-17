#include <iostream>
using namespace std;
int WidthMax(int **arr, int s)
{
    int max = arr[0][0];
    for (int i = 0; i < s; i++)
    {
        if (arr[i][0] > max)
        {
            max = arr[i][0];
        }
    }
    return max;
}

int HeightMax(int **arr, int s)
{
    int max = arr[0][1];
    for (int i = 0; i < s; i++)
    {
        if (arr[i][1] > max)
        {
            max = arr[i][1];
        }
    }
    return max;
}
int main()
{
    int t, n;
    cin >> t;
    for (int k = 0; k < t; k++)
    {
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
        int h = HeightMax(arr, n);
        int w = WidthMax(arr, n);
        cout << 2 * (h + w) << endl;

        // Correctly deallocate the arrays
        for (int i = 0; i < n; i++)
        {
            delete[] arr[i]; // Use delete[] to free the array
        }
        delete[] arr; // Correctly free the array of pointers
    }
    return 0;
}
