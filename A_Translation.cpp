#include <bits/stdc++.h>
using namespace std;
int main()
{
    string n, m;
    cin >> n >> m;
    int size = n.length();
    bool ch = false;
    if (n.length() != m.length())
    {
        cout << "NO" << endl;
    }
    else
    {
        for (int i = 0; i < size; i++)
        {
            if (n[i] != m[size - 1 - i])
            {
                ch = true;
                break;
            }
        }
        if (ch)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
    return 0;
}