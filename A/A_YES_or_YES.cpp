#include <bits/stdc++.h>
using namespace std;
bool Check(string a)
{
    if (a[0] == 'Y' || a[0] == 'y')
    {
        if (a[1] == 'E' || a[1] == 'e')
        {
            if (a[2] == 'S' || a[2] == 's')
            {
                return true;
            }
            else
            {
                return false;
            }
        }
        else
        {
            return false;
        }
    }
    else
    {
        return false;
    }
}
int main()
{
    int n;
    cin >> n;
    string a;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        if (Check(a))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}