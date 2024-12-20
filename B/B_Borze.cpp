#include <iostream>
#include <string>
using namespace std;

int main()
{
    string a;
    cin >> a;
    string b;
    int size = a.length();
    for (int i = 0; i < size; i++)
    {
        if (i < (size-1) && a[i] == '-' && a[i+1] == '.')
        {
            b.push_back('1');
            i++;
        }
        else if (i < (size-1) && a[i] == '-' && a[i+1] == '-')
        {
            b.push_back('2');
            i++;
        }
        else
        {
            b.push_back('0');
        }
    }
    cout << b << endl;
    return 0;
}