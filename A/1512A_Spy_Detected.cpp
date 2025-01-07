#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, l;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> l;
        int *arr = new int[l];
        unordered_map<int, int> s;
        for (int j = 0; j < l; j++)
        {
            cin >> arr[j];
            s[arr[j]] += 1;
        }
        for (int j = 0; j < l; j++)
        {
            if (s[arr[j]] == 1)
            {
                cout << j + 1 << endl;
                break;
            }
        }
    }
    return 0;
}