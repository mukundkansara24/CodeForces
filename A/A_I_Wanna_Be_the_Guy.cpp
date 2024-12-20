#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    bool *ch = new bool[n];
    for (int i = 0; i < n; i++)
    {
        ch[i] = false;
    }
    int a, p, q;
    cin >> p;
    for (int i = 0; i < p; i++)
    {
        cin >> a;
        if (ch[a - 1] == false)
            ch[a - 1] = true;
    }
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        cin >> a;
        if (ch[a - 1] == false)
            ch[a - 1] = true;
    }
    for (int i = 0; i < n; i++)
    {
        if (!ch[i])
        {
            cout << "Oh, my keyboard!" << endl;
            exit(0);
        }
    }
    cout << "I become the guy." << endl;
    return 0;
}