#include <bits/stdc++.h>
using namespace std;
int Max(int *arr, bool *ch)
{
    int maxi = INT_MIN;
    int s;
    for (int i = 0; i < 12; i++)
    {
        if (maxi < arr[i] && ch[i] == false)
        {
            maxi = arr[i];
            s = i;
        }
    }
    ch[s] = true;
    return maxi;
}
int main()
{
    int n;
    cin >> n;
    int arr[12];
    for (int i = 0; i < 12; i++)
    {
        cin >> arr[i];
    }
    bool ch[12] = {0};
    int cnt = 0, cnt2 = 0;
    while (n > 0 && cnt2 < 12)
    {
        // cout << "n = " << n << endl;
        n = n - Max(arr, ch);
        cnt2++;
    }
    if (cnt2 <= 12 && n > 0)
    {
        cout << -1 << endl;
    }
    else
        cout << cnt2 << endl;
    return 0;
}