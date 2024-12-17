#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, cnt = 0, num;
    cin >> n;
    char a;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        cin >> num;
        if (a == 'P')
        {
            cnt = cnt + num;
        }
        else
        {
            // cout << "cnt " << cnt << endl;
            cnt = cnt - num;
            if (cnt < 0)
            {
                cout << "YES" << endl;
                cnt = 0;
            }
            else
                cout << "NO" << endl;
        }
    }
    return 0;
}