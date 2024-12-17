#include <iostream>
using namespace std;

int main()
{
    string a;
    cin >> a;
    int size = a.length(), lc = 0, uc = 0;
    for (int i = 0; i < size; i++)
    {
        if (a[i] >= 'A' && a[i] <= 'Z')
            uc++;
        else
            lc++;
    }
    if (uc > lc)
    {
        for (int i = 0; i < size; i++)
        {
            if (a[i] >= 'a' && a[i] <= 'z')
            {
                a[i] -= 32;
            }
        }
    }
    else
    {
        for (int i = 0; i < size; i++)
        {
            if (a[i] >= 'A' && a[i] <= 'Z')
            {
                a[i] += 32;
            }
        }
    }
    cout << a << endl;
    return 0;
}