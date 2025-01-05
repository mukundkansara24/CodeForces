#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, a, temp;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        int cnt = 0;
        for (int j = 0; j < 3; j++)
        {
            cin >> temp;
            if (temp > a)
                cnt++;
        }
        cout << cnt << endl;
    }
    return 0;
}