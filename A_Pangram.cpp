#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string a;
    cin >> a;
    int ind;
    bool ch[26] = {0};
    for (int i = 0; i < n; i++)
    {
        if (a[i] >= 'A' && a[i] <= 'Z')
        {
            a[i] = a[i] - 'A' + 'a';
            // cout << a[i] << endl;
        }
        ind = a[i] - 'a';
        ch[ind] = 1;
    }
    for (int i = 0; i < 26; i++)
    {
        if(ch[i] == false)
        {
            cout << "NO" << endl;
            exit(0);
        }
    }
    cout << "YES" << endl;
    return 0;
}