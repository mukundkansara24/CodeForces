#include <iostream>
using namespace std;
void Toggle(int *a)
{
    if (*a == 1)
        *a = 0;
    else
        *a = 1;
}
int main()
{
    int arr[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
        }
    }
    int ans[3][3] = {{1,1,1},{1,1,1},{1,1,1}};
    int m = 0, n = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (arr[i][j] % 2 != 0)
            {
                m = i, n = j;
                if (m == 0 && n == 0)
                {
                    Toggle(&ans[m][n]);
                    Toggle(&ans[m + 1][n]);
                    Toggle(&ans[m][n + 1]);
                }
                else if (m == 0 && n == 1)
                {
                    Toggle(&ans[m][n]);
                    Toggle(&ans[m][n - 1]);
                    Toggle(&ans[m][n + 1]);
                    Toggle(&ans[m + 1][n]);
                }
                else if (m == 0 && n == 2)
                {
                    Toggle(&ans[m][n]);
                    Toggle(&ans[m + 1][n]);
                    Toggle(&ans[m][n - 1]);
                }
                else if (m == 1 && n == 0)
                {
                    Toggle(&ans[m][n]);
                    Toggle(&ans[m - 1][n]);
                    Toggle(&ans[m + 1][n]);
                    Toggle(&ans[m][n + 1]);
                }
                else if (m == 1 && n == 1)
                {
                    Toggle(&ans[m][n]);
                    Toggle(&ans[m + 1][n]);
                    Toggle(&ans[m - 1][n]);
                    Toggle(&ans[m][n + 1]);
                    Toggle(&ans[m][n - 1]);
                }
                else if (m == 1 && n == 2)
                {
                    Toggle(&ans[m][n]);
                    Toggle(&ans[m - 1][n]);
                    Toggle(&ans[m + 1][n]);
                    Toggle(&ans[m][n - 1]);
                }
                else if (m == 2 && n == 0)
                {
                    Toggle(&ans[m][n]);
                    Toggle(&ans[m - 1][n]);
                    Toggle(&ans[m][n + 1]);
                }
                else if (m == 2 && n == 1)
                {
                    Toggle(&ans[m][n]);
                    Toggle(&ans[m - 1][n]);
                    Toggle(&ans[m][n + 1]);
                    Toggle(&ans[m][n - 1]);
                }
                else if (m == 2 && n == 2)
                {
                    Toggle(&ans[m][n]);
                    Toggle(&ans[m - 1][n]);
                    Toggle(&ans[m][n - 1]);
                }
            }
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << ans[i][j];
        }
        cout << endl;
    }
    return 0;
}