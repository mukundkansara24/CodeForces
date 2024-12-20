#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        int pos = arr[i];
        int neg = (-1) * arr[i];
        int m = 0, s = 0, t = 1, dot = 0;
        while (true)
        {
            s = (-1) * (2 * t - 1);
            dot += s;
            if (dot < neg)
            {
                cout << "Sakurako" << endl;
                break;
            }
            t++;
            m = 2 * t - 1;
            dot += m;
            if (dot > pos)
            {
                cout << "Kosuke" << endl;
                break;
            }
            t++;
        }
    }
    return 0;
}