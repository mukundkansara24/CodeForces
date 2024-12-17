#include <iostream>
using namespace std;
unsigned long long Modulo(long long a)
{
    if (a < 0)
        return (-1) * a;
    else
        return a;
}
unsigned long long Calculate(int n, int m, int r, int c)
{
    unsigned long long dist = 0;
    long long s, t;
    for (long long i = (r - 1); i < n; i++)
    {
        for (long long j = 0; j < m; j++)
        {
            if (j + 1 >= m)
            {
                t = 0;
                if (i + 1 >= n)
                {
                    break;
                }
                else
                {
                    s = i + 1;
                }
            }
            else
            {
                s = i;
                t = j + 1;
            }
            dist = dist + Modulo(s - i) + Modulo(t - j);
            // cout << dist << "at i = " << i << "at j = " << j << endl;
        }
    }
    return (dist - (c - 1));
}
int main()
{
    int t;
    cin >> t;
    int n, m, r, c;
    for (int i = 0; i < t; i++)
    {
        cin >> n >> m >> r >> c;
        unsigned long long ans = Calculate(n, m, r, c);
        cout << ans << endl;
    }
    return 0;
}