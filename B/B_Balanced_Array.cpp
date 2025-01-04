#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> m;
        if (m % 4 != 0)
        {
            cout << "NO" << endl;
            continue;
        }
        else
        {
            cout << "YES" << endl;
            int e = 2, o = 1, es = 0, os = 0;
            for (int j = 0; j < m / 2; j++)
            {
                cout << e << " ";
                es += e;
                e += 2;
            }
            for (int j = 1; j < m / 2; j++)
            {
                cout << o << " ";
                os += o;
                o += 2;
            }
            cout << es - os << endl;
        }
    }
    return 0;
}