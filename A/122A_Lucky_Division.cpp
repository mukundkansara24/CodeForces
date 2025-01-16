#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string a = to_string(n);
    int i = 0;
    bool ch = false;
    while(i < a.length())
    {
        if(a[i] != '4' && a[i] != '7')
        {
            ch = true;
        }
        i++;
    }
    if(ch)
    {
        if(n%4 == 0 || n%7==0 || n%47==0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    else
        cout << "YES" << endl;
    return 0;
}