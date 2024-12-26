#include <bits/stdc++.h>
using namespace std;
bool Check(int a)
{
    while (a > 0)
    {
        string st = to_string(a);
        int m = 0;
        bool ch = false;
        for (int i = 0; i < st.length() - 1; i++)
        {
            if (st[i] == '3' && st[i + 1] == '3')
            {
                ch = true;
                m = i;
                break;
            }
        }
        if (ch == true)
        {
            string s;
            for (int i = 0; i < st.length(); i++)
            {
                if (i == m)
                    i++;
                else
                {
                    s.push_back(st[i]);
                }
            }
            if (s.empty())
                a = 0;
            else
                a = stoi(s);
        }
        else
        {
            a = a - 33;
        }
    }
    if (a == 0)
        return true;
    else
        return false;
}
int main()
{
    int n, temp;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        if (Check(temp))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}