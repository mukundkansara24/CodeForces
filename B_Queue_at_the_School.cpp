#include <iostream>
using namespace std;

int main()
{
    int n, t;
    cin >> n >> t;
    string a;
    cin >> a;
    int size = a.length();
    int j = 0;
    while (j < t)
    {
        for (int i = 0; i < size; i++)
        {
            if (i != (size - 1) && a[i] == 'B')
            {
                if (a[i + 1] == 'G')
                {
                    swap(a[i], a[i + 1]);
                    i++;
                    j++;
                }
            }
        }
    }
    cout << a << endl;
    return 0;
}