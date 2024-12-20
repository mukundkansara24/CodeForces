#include <iostream>
using namespace std;
int calc(int a)
{
    return (a * a + a) / 2;
}
int main()
{
    int n;
    cin >> n;
    int i = 1;
    int ans = 0;
    while (n > 0)
    {
        ans = calc(i);
        if (ans > n)
        {
            break;
        }
        n = n - ans;
        i++;
    }
    cout << i - 1 << endl;
    return 0;
}