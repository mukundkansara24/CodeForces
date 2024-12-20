#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, cnt;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int m, s;
        cin >> m >> s;
        string *arr = new string[m];
        for (int j = 0; j < m; j++)
        {
            cin >> arr[j];
        }
        int k = 0;
        cnt = 0;
        while (cnt < m)
        {
            int len = arr[cnt].length();
            if(k+len>s)
                break;
            else
            {
                k+=len;
            }
            cnt++;
        }
        cout << cnt << endl;
        delete []arr;
    }
    return 0;
}