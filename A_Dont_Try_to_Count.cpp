#include <bits/stdc++.h>
using namespace std;
bool isSubStr(string f, string s)
{
    // if (f.length() < s.length())
    // {
    //     int j;
    //     for (int i = 0; i <= s.length() - f.length(); i++)
    //     {
    //         for (j = 0; j < f.length(); j++)
    //         {
    //             if (s[i + j] != f[j])
    //                 break;
    //         }
    //         if (j == f.length())
    //         {
    //             return true;
    //         }
    //     }
    //     return false;
    // }
    // else
    // {
    if (f.length() < s.length())
        return false;
    int j;
    for (int i = 0; i <= f.length() - s.length(); i++)
    {
        for (j = 0; j < s.length(); j++)
        {
            if (f[i + j] != s[j])
                break;
        }
        if (j == s.length())
        {
            return true;
        }
    }
    return false;
    // }
}
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int cnt = 0;
        int flen, slen;
        cin >> flen >> slen;
        string f, s;
        cin >> f >> s;
        int ch = 0;
        for (int i = 0; i < 6; i++)
        {
            if (isSubStr(f, s))
            {
                ch = 1;
                break;
            }
            f.append(f);
            cnt++;
        }
        if (ch == 1)
            cout << cnt << endl;
        else
            cout << "-1" << endl;
    }
    return 0;
}