#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        if (n % 10 == 0)
            n = n / 10;
        else
            n = n - 1;
    }
    cout << n << endl;
    return 0;
}