#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,temp;
    cin >> n;
    int cnt = 0;
    int h;
    cin >> h;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        if (temp>h)
            cnt+=2;
        else
            cnt+=1;
    }
    cout << cnt << endl;
    
    return 0;
}