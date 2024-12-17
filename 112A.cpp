#include <iostream>
#include <string>
using namespace std;

int main()
{
    string a, b;
    cin >> a >> b;
    int size = a.length();
    char ch1, ch2;
    for (int i = 0; i < size; i++)
    {
        ch1 = tolower(a[i]);
        ch2 = tolower(b[i]);
        if (ch1 > ch2)
        {
            cout << '1' << endl;
            break;
        }
        else if (ch1 < ch2)
        {
            cout << "-1" << endl;
            break;
        }
        else if (ch1 == ch2 && i == size - 1)
        {
            cout << '0' << endl;
            break;
        }
    }
    return 0;
}