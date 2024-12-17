#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, temp, s = 0;
    cin >> n;
    float d = n * 100;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        s += temp;
    }
    // cout << s << endl;
    cout << (s / d)*100 << endl;
    return 0;
}