#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    long long int a;
    for (int i = 0; i < n; i++)
    {
        long int cnt = 1;
        cin >> a;
        while (a > 3)
        {
            cnt *= 2;
            a = a / 4;
        }
        cout << cnt << endl;
    }
    return 0;
}