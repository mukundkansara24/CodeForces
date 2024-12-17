#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int cnt = 0;
    int a,b;
    cin >> a;
    for (int i = 1; i < n; i++)
    {
        cin >> b;
        if (a!=b)
        {
            cnt++;
        }
        a = b;
    }
    cout << cnt+1 << endl;
}
