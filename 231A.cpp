#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int **arr = new int*[n];
    for (int i = 0; i < n; i++)
    {
        arr[i] = new int[3];
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
        }
    }
    int count = 0;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (arr[i][j]==1)
            {
                count++;
            }
        }
        if (count>=2)
        {
            ans++;
        }
        count = 0;
    }

    cout << ans << endl;
    return 0;
}