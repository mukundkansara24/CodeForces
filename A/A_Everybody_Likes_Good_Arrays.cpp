#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m, temp1, temp2, cnt;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cnt = 0;
        cin >> m;
        cin >> temp1;
        for (int j = 1; j < m; j++)
        {
            cin >> temp2;
            if ((temp2 % 2 == 0 && temp1 % 2 == 0) || (temp2 % 2 != 0 && temp1 % 2 != 0))
                cnt++;
            temp1 = temp2;
        }
        cout << cnt << endl;
    }
    return 0;
}