#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    if(n%3 == 0)
        cout << "Second" << endl;
    else
        cout << "First" << endl;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    while(n--)
    {
        solve();
    }
    return 0;
}