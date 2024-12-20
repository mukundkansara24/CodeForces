#include <iostream>
using namespace std;

int main()
{
    string a;
    cin >> a;
    char c = a[0];
    if (c >= 97 && c <= 122)
        c = c - 32;
    a[0] = c;
    cout << a << endl;
    return 0;
}