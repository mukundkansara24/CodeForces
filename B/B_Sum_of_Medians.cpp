#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> arr(n*k);
    for(int i = 0; i < n*k; i++)
    {
        cin >> arr[i];
    }
    int med = n/2+1;
    long long sum = 0;
    int z = n*k;
    while(k--)
    {
        z-=med;
        // cout << "arr = " << arr[z] << endl;
        sum+=arr[z];
    }
    cout << sum << endl;
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