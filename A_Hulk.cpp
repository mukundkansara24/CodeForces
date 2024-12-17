#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string a = "I hate ";
    string b = "I love ";
    string c = "that ";
    string ans = "";
    for (int i = 0; i < n; i++)
    {
        if ((i + 1) % 2 != 0)
        {
            ans.append(a);
        }
        else
        {
            ans.append(b);
        }
        if ((i + 1) != n)
            ans.append(c);
    }
    ans.append("it");
    cout << ans << endl;

    return 0;
}