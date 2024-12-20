#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j < 2 * (n - i); j++)
        {
            cout << " ";
        }
        for (int k = 0; k <= i; k++)
        {
            cout << k;
            if(k<i)
            {
                cout << " ";
            }
            if (k == i)
            {
                for (int l = k - 1; l >= 0; l--)
                {
                    cout << " ";
                    cout << l;
                }
            }
        }
        cout << endl;
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= 2 * i; j++)
        {
            cout << " ";
        }
        for (int k = 0; k <= (n - i); k++)
        {
            cout << k;
            if(k<n-i)
            {
                cout << " ";
            }
            if (k == (n - i))
            {
                for (int l = k - 1; l >= 0; l--)
                {
                    cout << " ";
                    cout << l;
                }
            }
        }
        cout << endl;
    }
    return 0;
}