#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, s, k;
    string a;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int arr[26] = {0};
        cin >> s >> k;
        cin >> a;
        for (int i = 0; i < s; i++)
        {
            int ind = a[i] - 97;
            arr[ind] += 1;
        }
        int o = 0;
        for (int i = 0; i < 26; i++)
        {
            if (arr[i] % 2 != 0)
                o++;
        }
        if (o - 1 <= k)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}