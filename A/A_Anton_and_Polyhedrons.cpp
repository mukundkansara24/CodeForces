#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, cnt = 0;
    cin >> n;
    string a;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        if (a[0] == 'I')
            cnt += 20;
        else if (a[0] == 'C')
            cnt += 6;
        else if (a[0] == 'T')
            cnt += 4;
        else if (a[0] == 'D')
            cnt += 12;
        else if (a[0] == 'O')
            cnt += 8;
    }
    cout << cnt << endl;
    return 0;
}