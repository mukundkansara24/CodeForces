#include <bits/stdc++.h>
using namespace std;

int Count(int *ar1, int n, int *ar2, int m)
{
    int max = INT_MIN, cnt = 0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            // cout << ar2[i] << " " << ar1[j] << endl;
            if (ar2[i] % ar1[j] == 0)
            {
                int a = ar2[i] / ar1[j];
                if (a > max)
                {
                    max = a;
                    cnt = 1;
                }
                else if (a == max)
                {
                    cnt++;
                }
            }
            // cout << "Cnt = " << cnt << endl;
        }
    }
    return cnt;
}
int main()
{
    int n, m;
    cin >> n;
    int *arn = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arn[i];
    }
    cin >> m;
    int *arm = new int[m];
    for (int i = 0; i < m; i++)
    {
        cin >> arm[i];
    }
    cout << Count(arn, n, arm, m) << endl;
    return 0;
}