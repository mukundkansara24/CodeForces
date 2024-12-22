#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    cin >> a;
    int cnt = 0;
    int arr[26] = {0};
    for (int i = 0; i < a.length(); i++)
    {
        arr[a[i] - 'a']++;
    }
    for (int i = 0; i < 26; i++)
    {
        if (arr[i] % 2 != 0)
        {
            cnt++;
        }
    }
    if (cnt % 2 == 0 && cnt != 0)
        cout << "Second" << endl;
    else
        cout << "First" << endl;

    return 0;
}