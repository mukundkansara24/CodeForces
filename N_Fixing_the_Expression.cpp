#include <bits/stdc++.h>
using namespace std;
void Check(char o, int a, int b)
{
    if (o == '<')
    {
        if (a < b)
        {
            cout << a << o << b;
            return;
        }
        else if (a == b)
        {
            cout << a << "=" << b;
            return;
        }
        else
        {
            cout << a << ">" << b;
            return;
        }
    }
    else if (o == '>')
    {
        if (a > b)
        {
            cout << a << o << b;
            return;
        }
        else if (a == b)
        {
            cout << a << "=" << b;
            return;
        }
        else
        {
            cout << a << "<" << b;
            return;
        }
    }
    else
    {
        if (a > b)
        {
            cout << a << ">" << b;
            return;
        }
        else if (a == b)
        {
            cout << a << "=" << b;
            return;
        }
        else
        {
            cout << a << "<" << b;
            return;
        }
    }
}
int main()
{
    int n;
    string a;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        int n1 = a[0] - '0';
        int n2 = a[2] - '0';
        Check(a[1], n1, n2);
        cout << endl;
    }
    return 0;
}