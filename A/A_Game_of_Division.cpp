#include <bits/stdc++.h>
using namespace std;
int Mod(int a, int b)
{
    if ((a - b) < 0)
        return (b - a);
    else
        return (a - b);
}
int main()
{
    int n, s, k, ch, temp, ansi;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> s >> k;
        int *arr = new int[s];
        int *ans = new int[s];
        ans[0] = -1;
        ansi = 0;
        for (int j = 0; j < s; j++)
        {
            cin >> arr[j];
        }
        ch = 1;
        for (int j = 0; j < s; j++)
        {
            for (int m = 0; m < s; m++)
            {
                if (j == m)
                    continue;
                else
                {
                    if (Mod(arr[j], arr[m]) % k == 0)
                    {
                        ch = ch * 0;
                        break;
                    }
                    else
                    {
                        ch = ch * 1;
                        temp = j;
                    }
                }
            }
            if (ch == 1)
            {
                ans[ansi++] = temp;
            }
            ch = 1;
        }
        if (ans[0] == -1)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
            if (s > 1)
                cout << ans[0] + 1 << endl;
            else
                cout << 1 << endl;
        }
        delete[] arr;
        delete[] ans;
    }
    return 0;
}