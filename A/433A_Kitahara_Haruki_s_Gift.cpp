#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int temp, a = 0, b = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        if (temp == 100)
            a++;
        else
            b++;
    }
    if ((a + b * 2) % 2 != 0)
    {
        cout << "NO" << endl;
    }
    else if(a==0 && b%2 != 0)
        cout << "NO" << endl;
    else if(b == 0 && a%2 != 0)
        cout << "NO" << endl;
    else
    {
        if ((b * 2 - a) % 2 == 0)
        {
            cout << "YES" << endl;
        }
        else
            cout << "NO" << endl;
    }
    return 0;
}