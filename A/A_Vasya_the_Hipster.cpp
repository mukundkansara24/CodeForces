#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int mi = min(n, m);
    if (n - mi <= 0)
    {
        m = (m - mi) / 2;
        cout << n << " " << m << endl;
    }
    else
    {
        n = (n - mi) / 2;
        cout << m << " " << n << endl;
    }
    return 0;
}