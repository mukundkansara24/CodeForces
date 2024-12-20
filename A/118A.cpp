#include <iostream>
using namespace std;
bool isVowel(char a)
{
    if (a == 'a' || a == 'i' || a == 'o' || a == 'u' || a == 'e' || a == 'y')
        return true;
    else
        return false;
}
int main()
{
    string a;
    cin >> a;
    string ans;
    char ch;
    for (int i = 0; i < a.length(); i++)
    {
        ch = tolower(a[i]);
        if (!isVowel(ch))
        {
            ans.push_back('.');
            ans.push_back(ch);
        }
    }
    cout << ans << endl;
    return 0;
}