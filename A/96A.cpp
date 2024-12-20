#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a;
    cin >> a;
    int i = 0, cnt = 1;
    while (i < a.length())
    {
        if (a[i] == a[i + 1])

            cnt++;

        else
            cnt = 1;
        if (cnt >= 7)
        {
            cout << "YES" << endl;
            exit(0);
        }
        i++;
    }
    cout << "NO" << endl;
    return 0;
}