#include <iostream>
using namespace std;

int main()
{
    int m, n, a;
    cin >> m >> n >> a;
    int i = 0, j = 0;
    while (m > 0)
    {
        m = m - a;
        i++;
    }
    while (n > 0)
    {
        n = n - a;
        j++;
    }
    cout << (long long)i * j << endl;
    return 0;
}