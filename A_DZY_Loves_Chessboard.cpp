#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    string *a = new string[n];
    string *b = new string[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (a[i][j] == '.')
            {
                if ((i % 2 == 0 && j % 2 == 0) || (i % 2 != 0 && j % 2 != 0))
                {
                    b[i].push_back('B');
                }
                else
                {
                    b[i].push_back('W');
                }
            }
            else
            {
                b[i].push_back('-');
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << b[i] << endl;
    }
    return 0;
}