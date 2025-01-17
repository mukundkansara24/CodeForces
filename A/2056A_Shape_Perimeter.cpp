#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int total = n * m * 4;
        int a, b, c, d, sub = 0;
        cin >> a >> b;
        c = a;
        d = b;
        int aa = a, bb = b;
        for (int i = 1; i < n; i++)
        {
            cin >> a >> b;
            aa += a;
            bb += b;
            int at = m + c;
            int bt = m + d;
            sub += 2 * (at - aa + bt - bb);
            c += a, d += b;
        }
        cout << total - sub << endl;
    }
    return 0;
}