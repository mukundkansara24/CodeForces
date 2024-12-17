#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    bool ch = false;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            for (int j = 0; j < m; j++)
            {
                cout << "#";
            }
        }
        else
        {
            if (ch == false)
            {
                for (int j = 1; j < m; j++)
                {
                    cout << ".";
                }
                cout << "#";
            }
            else
            {
                cout << "#";
                for (int j = 1; j < m; j++)
                {
                    cout << ".";
                }
            }
            ch = !ch;
        }
        cout << endl;
    }
    return 0;
}