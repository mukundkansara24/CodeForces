#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int max, temp, min, cnt = 0;
    cin >> temp;
    max = temp;
    min = temp;
    for (int i = 1; i < n; i++)
    {
        cin >> temp;
        if(temp<min)
        {
            min = temp;
            cnt++;
        }
        else if(temp>max)
        {
            max = temp;
            cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}