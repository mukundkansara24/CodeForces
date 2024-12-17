#include <iostream>
#include <string>
using namespace std;

int main()
{
    string a;
    cin >> a;
    int size = a.length();
    int count1 = 0, count2 = 0, count3 = 0;
    for (int i = 0; i < size; i++)
    {
        if (a[i] == '1')
            count1++;
        else if (a[i] == '2')
            count2++;
        else if (a[i] == '3')
            count3++;
    }
    string ans;
    for (int i = 0; i < size; i++)
    {
        if (count1 > 0)
        {
            ans.push_back('1');
            count1--;
        }
        else if (count2 > 0)
        {
            ans.push_back('2');
            count2--;
        }
        else if (count3 > 0)
        {
            ans.push_back('3');
            count3--;
        }
        if (ans.length()==size)
        {
            break;
        }
        ans.push_back('+');
        i++;
    }
    cout << ans << endl;
    return 0;
}