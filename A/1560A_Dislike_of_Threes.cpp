#include <bits/stdc++.h>
using namespace std;
int Ans(int a)
{
    vector<int> v;
    int j = 1;
    int i = 0;
    while(i < a)
    {
        if (j % 3 != 0 && j % 10 != 3)
        {
            v.push_back(j);
            i++;
        }
        j++;
    }
    return v[v.size()-1];
}
int main()
{
    int n, temp;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        cout << Ans(temp) << endl;
    }
    return 0;
}