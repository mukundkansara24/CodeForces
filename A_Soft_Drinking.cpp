#include <bits/stdc++.h>
using namespace std;
int Min(int a, int b, int c)
{
    if(a<b)
    {
        if(a<c)
        {
            return a;
        }
        else
        {
            return c;
        }
    }
    else
    {
        if(b<c)
        {
            return b;
        }
        else
        {
            return c;
        }
    }
}
int main()
{
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    int tm = k*l;
    int tost = tm/nl;
    int lime = c*d;
    int st = p/np;
    cout << Min(lime/n,tost/n,st/n) << endl;
    return 0;
}