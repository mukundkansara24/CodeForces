#include <iostream>
using namespace std;

int main()
{
    int **arr = new int *[5];
    int temp, r, c;
    for (int i = 0; i < 5; i++)
    {
        arr[i] = new int[5];
        for (int j = 0; j < 5; j++)
        {
            cin >> temp;
            arr[i][j] = temp;
            if (temp == 1)
            {
                r = i, c = j;
            }
        }
    }
    temp = 0;
    while (r != 2)
    {
        if (r > 2)
        {
            r--;
            temp++;
        }
        else if (r < 2)
        {
            r++;
            temp++;
        }
    }

    while (c != 2)
    {
        if (c > 2)
        {
            c--;
            temp++;
        }
        else if (c < 2)
        {
            c++;
            temp++;
        }
    }
    cout << temp << endl;
    return 0;
}