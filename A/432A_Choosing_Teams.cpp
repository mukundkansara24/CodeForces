#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    int temp, cnt = 0, team = 0;
    for(int i = 0; i < n; i++)
    {
        bool ch = false;
        cin >> temp;
        if(k+temp <= 5)
        {
            ch = true;
            cnt++;
        }
        if(cnt%3==0 && ch)
        {
            team++;
            cnt = 0;
        }
        // cout << "temp = " << temp << " cnt  = " << cnt << " team = " << team << endl;
    }
    cout << team << endl;
    return 0;
}