#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a1, a2, a3;
    cin >> a1 >> a2 >> a3;
    int l, b, h;
    l = sqrt(a1 * a3 / a2);
    b = sqrt(a1 * a2 / a3);
    h = sqrt(a2 * a3 / a1);
    // cout << "l = " << l << " b = " << b << " h = " << h << endl;
    cout << 4 * (l + b + h) << endl;
    return 0;
}