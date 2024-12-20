#include <iostream>
using namespace std;
int NextPrime(int a)
{
    int s = a;
    while (true)
    {
        s++;
        for (int i = 2; i <= s; i++)
        {
            if (s % i == 0 && s != i)
            {
                break;
            }
            else if (s%i == 0 && s == i)
            {
                return s;
            }
        }
    }
    return -1;
}
int main()
{
    int a, b;
    cin >> a >> b;
    int ans = NextPrime(a);
    if (ans == b)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}