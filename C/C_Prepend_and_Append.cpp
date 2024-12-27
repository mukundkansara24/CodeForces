#include <bits/stdc++.h>
using namespace std;
int Check(string a, int size)
{
    int s = 0, e = size-1;
    while(s<e && a[s]!=a[e])
    {
        s++,e--;
    }
    return e-s+1;
}
int main()
{
    int n, s;
    string a;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        cin >> a;
        cout << Check(a, s) << endl;
    }
    return 0;
}