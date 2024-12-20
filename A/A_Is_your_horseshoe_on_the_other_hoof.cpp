#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[4];
    for (int i = 0; i < 4; i++)
    {
        cin >> arr[i];
    }
    int cnt = 0, s = 0;
    bool ch[4] = {0};
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (arr[i] == arr[j] && ch[j] == 0)
            {
                cnt++;
                ch[j] = 1;
            }
        }
        if (cnt <= 0)
        {
        s += cnt;
        }
        else
        {
            s+=cnt-1;
        }
        cnt = 0;
    }
    cout << s << endl;
    return 0;
}