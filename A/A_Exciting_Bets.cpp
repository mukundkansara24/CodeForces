#include <bits/stdc++.h>
using namespace std;
void solve()
{
    long long a, b;
    cin >> a >> b;
    if(a==b)
    {
        cout << "0 0" << endl;
        return;
    }
    if(b>a)
    {
        swap(a, b);
    }
    cout << a-b << " " << min(b%(a-b), (a-b)-b%(a-b)) << endl;
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