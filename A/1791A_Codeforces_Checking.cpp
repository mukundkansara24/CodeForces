#include <bits/stdc++.h>
using namespace std;
bool Check(char a)
{
    string b = "codeforces";
    for (int i = 0; i < 10; i++)
    {
        if(a == b[i])
            return true;
    }
    return false;
}
int main()
{
    int n;
    cin >> n;
    char a;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        if(Check(a))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}