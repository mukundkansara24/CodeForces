#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin >> n;
    int a = 0;
    if (n%2==0)
    {
        cout << n/2 << endl;
    }
    else
    {
        cout << (-1)*(n+1)/2 << endl;
    }
    return 0;
}