#include <bits/stdc++.h>
using namespace std;
int main()
{
    string n;
    cin >> n;
    string ans[100];
    int j = 0;
    for (int i = 0; i < n.length(); i++)
    {
        if (n[i] == 'W')
        {
            if (n[i + 1] == 'U')
            {
                if (n[i + 2] == 'B')
                {
                    i += 2;
                    j++;
                }
                else
                {
                    ans[j] = ans[j] + n[i];
                }
            }
            else
            {
                ans[j] = ans[j] + n[i];
            }
        }
        else
        {
            ans[j] = ans[j] + n[i];
        }
    }
    string fans = "";
    for (int i = 0; i <= j; i++)
    {
        if (ans[i][0] == '\0')
            continue;
        fans = fans + ans[i];
        fans = fans + " ";
    }
    cout << fans << endl;
    return 0;
}