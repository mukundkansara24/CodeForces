#include <bits/stdc++.h>
using namespace std;
int main()
{
    double n;
    cin >> n;
    int cnt = 0;
    while (n > 0)
    {
        if (n >= 100)
        {
            n = n - 100;
            cnt++;
        }
        else if (n >= 20)
        {
            n = n - 20;
            cnt++;
        }
        else if (n >= 10)
        {
            n = n - 10;
            cnt++;
        }
        else if (n >= 5)
        {
            n = n - 5;
            cnt++;
        }
        else
        {
            n = n - 1;
            cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}