#include <bits/stdc++.h>
using namespace std;
int main()
{
    string ans, a;
    cin >> a;
    for (int i = 0; i < a.length(); i++)
    {
        if (a[i] >= 'A' && a[i] <= 'Z')
        {
            a[i] = a[i] + 32;
        }
    }
    int i = 0;
    while (i < a.length())
    {
        if (a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u' || a[i] == 'y')
        {
            i++;
        }
        else if (a[i] >= 'a' && a[i] <= 'z')
        {
            ans.push_back('.');
            ans.push_back(a[i]);
            i++;
        }
    }
    cout << ans << endl;
    return 0;
}