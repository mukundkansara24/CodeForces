#include <iostream>
#include <string>
using namespace std;
int main()
{
    string a, b;
    cin >> a >> b;
    string ans;
    int size = a.length();
    for (int i = 0; i < size; i++)
    {
        if (a[i] == b[i])
            ans.push_back('0');
        else
            ans.push_back('1');
    }
    cout << ans << endl;
    return 0;
}