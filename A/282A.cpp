#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int ans = 0;
    string *arr = new string[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i][0] == '+' || arr[i][2] == '+')
        {
            ans++;
        }
        if (arr[i][0] == '-' || arr[i][2] == '-')
        {
            ans--;
        }
    }
    cout << ans << endl;
    return 0;
}