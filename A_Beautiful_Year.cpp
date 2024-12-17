#include <iostream>
using namespace std;
bool Checker(string a)
{
    int arr[10] = {0};
    int b;
    for (int i = 0; i < 4; i++)
    {
        b = a[i] - '0';
        arr[b]++;
    }
    for (int i = 0; i<10;i++)
    {
        if (arr[i]>1)
        {
            return true;
        }
    }
    return false;
}
int main()
{
    int a;
    cin >> a;
    a++;
    string b = to_string(a);
    while (Checker(b))
    {
        a++;
        b = to_string(a);
    }
    cout << a << endl;
    return 0;
}