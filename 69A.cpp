#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int **arr = new int*[n];
    int x=0,y=0,z=0;
    for (int i = 0; i < n; i++)
    {
        arr[i] = new int[3];
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
        }
        x+=arr[i][0];
        y+=arr[i][1];
        z+=arr[i][2];
    }
    if (x==0 && y==0 && z==0)
    {
        cout << "YES" << endl;
    }
    else
        cout << "NO" << endl;
    return 0;
}