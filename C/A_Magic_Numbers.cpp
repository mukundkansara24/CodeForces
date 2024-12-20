#include <bits/stdc++.h>
using namespace std;
void Answer(string n)
{
    int size = n.length();
    for (int i = 0; i < size; i++)
    {
        if (n[i] == '1')
        {
            if (n[i + 1] == '4')
            {
                if (n[i + 2] == '4')
                {
                    i += 2;
                }
                else
                {
                    i++;
                }
            }
        }
        else
        {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
}
int main()
{
    string n;
    cin >> n;
    Answer(n);
    return 0;
}