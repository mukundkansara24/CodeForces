#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    int v;
    vector<int> arr(1000000);
    int sum = 0;
    int ind = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> v;
        while(v--)
        {
            arr[ind++] = i+1;
        }
    }
    int k, t;
    cin >> k;
    while (k--)
    {
        cin >> t;
        cout << arr[t-1] << endl;
    }
    return 0;
}