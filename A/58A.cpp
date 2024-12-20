#include <iostream>
#include <string>
using namespace std;
int main()
{
    string a, b, c;
    cin >> a;
    b = "hello";
    int i = 0, j = 0;
    while (i < a.length() && j < b.length())
    {
        if (a[i] == b[j])
        {
            c.push_back(a[i]);
            i++, j++;
        }
        else if (a[i] != b[j])
        {
            i++;
        }
        else if (i > 0 && a[i - 1] == a[i])
        {
            i++;
        }
    }
    if (b == c)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}