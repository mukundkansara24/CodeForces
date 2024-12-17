#include <bits\stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t-- > 0)
    {
        int n;
        cin >> n;
        string s = "";
        if (n == 1 || n == 3)
            s.append("-1");
        else if (n % 2 == 0)
        {
            for (int i = 0; i < n - 2; i++)
            {
                s.append("3");
            }
            s.append("66");
        }
        else
        {
            for (int i = 0; i < n - 4; i++)
            {
                s.append("3");
            }
            s.append("6366");
        }
        cout << s << endl;
    }
    return 0;
}