#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] == 1)
        {
            cout << "HARD" << endl;
            exit(0);
        }
    }
    cout << "EASY" << endl;
    return 0;
}