#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    string a;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        int s1 = 0, s2 = 0;
        for (int j = 0; j < 3; j++)
        {
            s1 += a[j] - '0';
        }
        for (int j = 3; j < 6; j++)
        {
            s2 += a[j] - '0';
        }
        if (s1 == s2)
            cout << "yes" << endl;
        else
            cout << "no" << endl;
    }
    return 0;
}