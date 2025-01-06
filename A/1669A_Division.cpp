#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, temp;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        if (temp >= 1900)
            cout << "Division 1" << endl;
        else if (temp >= 1600 && temp <= 1899)
            cout << "Division 2" << endl;
        else if (temp >= 1400 && temp <= 1599)
            cout << "Division 3" << endl;
        else
            cout << "Division 4" << endl;
    }
    return 0;
}