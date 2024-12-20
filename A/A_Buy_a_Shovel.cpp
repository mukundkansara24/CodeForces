#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int i = 1;
    while (n % 10 != m && n % 10 != 0)
    {
        n = n/i;
        i++;
        n = n * i;
        // cout << n << endl;
    }
    cout << i << endl;
    return 0;
}