#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a, b;
    getline(cin, a);
    getline(cin, b);
    int arr[26] = {0};
    int arr2[26] = {0};
    int ind;
    for (int i = 0; i < a.length(); i++)
    {
        if (a[i] >= 'A' && a[i] <= 'Z')
        {
            ind = a[i] - 65;
            arr[ind] += 1;
        }
        else if (a[i] >= 'a' && a[i] <= 'z')
        {
            ind = a[i] - 97;
            arr2[ind] += 1;
        }
    }
    for (int i = 0; i < b.length(); i++)
    {
        if (b[i] >= 'A' && b[i] <= 'Z')
        {
            ind = b[i] - 65;
            if (arr[ind] <= 0)
            {
                cout << "NO" << endl;
                exit(0);
            }
            arr[ind] -= 1;
        }
        else if (b[i] >= 'a' && b[i] <= 'z')
        {
            ind = b[i] - 97;
            if (arr2[ind] <= 0)
            {
                cout << "NO" << endl;
                exit(0);
            }
            arr2[ind] -= 1;
        }
    }
    cout << "YES" << endl;
    return 0;
}