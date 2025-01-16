#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        int temp;
        int ans = 0;
        for(int j= 0; j < 3; j++)
        {
            cin >> temp;
            ans = temp^ans;
        }
        cout << ans << endl;
    }
    return 0;
}