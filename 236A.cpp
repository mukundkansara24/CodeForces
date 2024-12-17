#include <iostream>
using namespace std;

int main()
{
    string a;
    cin >> a;
    bool arr[26] = {0};
    int ch;
    for (int i = 0; i < a.length(); i++)
    {
        ch = a[i]-'a';
        arr[ch] = true;
    }
    int count = 0;
    for (int i = 0; i < 26; i++)
    {
        if (arr[i] == true)
            count++;
    }
    if (count % 2 == 0)
        cout << "CHAT WITH HER!" << endl;
    else
        cout << "IGNORE HIM!" << endl;
    return 0;
}