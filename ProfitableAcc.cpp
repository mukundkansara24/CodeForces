#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int mh, rm;
    int um;
    for (int i = 0; i < n; i++)
    {
        cin >> mh >> rm;
        if (rm <= mh)
        {
            cout << mh << endl;
        }
        else
        {
            um = rm - mh;
            rm = rm - 2 * um;
            if (rm > 0 && rm <= mh)
            {
                cout << rm << endl;
            }
            else
            {
                cout << 0 << endl;
            }
        }
    }
    return 0;
}