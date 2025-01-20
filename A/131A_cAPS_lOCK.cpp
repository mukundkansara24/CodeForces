#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    string n;
    cin >> n;
    if (n[0] >= 'a' && n[0] <= 'z')
    {
        bool ch = true;
        for (int i = 1; i < n.length(); i++)
        {
            if (n[i] >= 'A' && n[i] <= 'Z')
            {
                ch *= 1;
            }
            else
                ch = false;
        }
        if (ch)
        {
            n[0] = n[0] - 32;
            for (int i = 1; i < n.length(); i++)
            {
                n[i] = n[i] + 32;
            }
        }
        cout << n << endl;
    }
    else
    {
        bool ch = true;
        for (int i = 1; i < n.length(); i++)
        {
            if (n[i] >= 'A' && n[i] <= 'Z')
                ch *= 1;
            else
                ch = false;
        }
        if (ch)
        {
            for (int i = 0; i < n.length(); i++)
            {
                n[i] = n[i] + 32;
            }
        }
        cout << n << endl;
    }
    return 0;
}