#include <iostream>
using namespace std;
int NoCounter(int *arr, int *que, int s, int e, int q)
{
    int cnt = 0;
    if (s < e)
    {
        int i = s, j = 0;
        while (i < e && j < q)
        {
            cout << i << j << endl;
            if (arr[i] == que[j])
            {
                i = s;
                j++;
            }
            else if (arr[i] != que[j])
            {
                i++;
            }
            cnt++;
        }
    }
    else
    {
        cnt = 0;
        int i = e-1, j = 0;
        while (i >= s && j < q)
        {
            cout << i << j << endl;
            if (arr[i] == que[j])
            {
                i = e-1;
                j++;
            }
            else if (arr[i] != que[j])
            {
                i--;
            }
            cnt++;
        }
    }
    return cnt;
}
int main()
{
    int n;
    cin >> n;
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int q;
    cin >> q;
    int *quer = new int[q];
    for (int i = 0; i < q; i++)
    {
        cin >> quer[i];
    }
    cout << NoCounter(arr, quer, 0, n, q) << " ";
    cout << NoCounter(arr, quer, n, 0, q);
    return 0;
}