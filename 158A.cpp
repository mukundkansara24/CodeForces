#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    
    int min;
    cin >>min;
    int ans = 0;

    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] > min)
        {
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}