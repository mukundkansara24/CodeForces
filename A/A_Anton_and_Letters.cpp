#include <bits/stdc++.h>
using namespace std;
bool isPresent(string a, int size, char b)
{
    // cout << "b = " << b << endl;
    for (int i = 0; i < size; i++)
    {
        // cout << "a[" << i << "] = " << a[i] << endl;
        if (a[i] == b)
            return true;
    }
    return false;
}
int main()
{
    string a = "";
    char b;
    while (1)
    {
        cin >> b;
        if (b == '}')
            break;
        else if (b == '{' || b == ',')
            continue;
        else
        {
            a = a + b;
        }
    }
    int cnt = 0;
    for (int i = 0; i < a.length(); i++)
    {
        if (!isPresent(a, i, a[i]))
            cnt++;
    }

    cout << cnt << endl;
    return 0;
}