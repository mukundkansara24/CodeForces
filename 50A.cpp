#include <iostream>
using namespace std;

int main()
{
    int m;
    int n;
    cin >> m;
    cin >> n;
    int space = m*n;
    int ans = 0;
    while (space>=2)
    {
        space-=2;
        ans++;
    }
    cout << ans << endl;
    return 0;
}