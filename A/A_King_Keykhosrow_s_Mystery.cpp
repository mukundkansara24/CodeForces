#include <bits/stdc++.h>
using namespace std;
int GCD(int a, int b)
{
    // cout << "a = " << a << " b = " << b << endl;
    if (b == 0)
    {
        return a;
    }
    return GCD(b, a % b);
}
int main()
{
    int n, a, b;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        cin >> b;
        cout << (a * b) / GCD(a, b) << endl;
    }
    return 0;
}