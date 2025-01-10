#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, temp;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        vector <int> v;
        for(int j = 0; j < 3; j++)
        {
        cin >> temp;
        v.push_back(temp);
        }
        sort(v.begin(), v.end());
        cout << v[1] << endl;
    }
    return 0;
}