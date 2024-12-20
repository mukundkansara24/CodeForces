#include <iostream>
using namespace std;
bool Check(string a)
{
    int k = 1;
    for (int i = 0; i < a.length(); i++)
    {
        if (a[i] == '3' || a[i] == '6')
            k *= 1;
        else
            k *= 0;
    }
    return k;
}
string Calculate(int n)
{
    string ans;
    if (n == 1 || n == 3)
        return "-1";
    else if (n % 2 == 0)
    {
        for (int i = 0; i < n - 2; i++)
        {
            ans.append("3");
        }
        ans.append("66");
    }
    else
    {
        for (int i = 0; i < n - 4; i++)
        {
            ans.append("3");
        }
        ans.append("6366");
    }
    return ans;
}
int main()
{
    int t, n;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> n;
        string ans = Calculate(n);
        cout << ans << endl;
    }
    return 0;
}