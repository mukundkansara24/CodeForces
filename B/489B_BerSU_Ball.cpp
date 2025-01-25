#include <bits/stdc++.h>
using namespace std;
int mod(int a)
{
    return a > 0 ? a : a * (-1);
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    unordered_map<int, bool> m1, m2;
    vector<int> boy(n);
    for (int i = 0; i < n; i++)
    {
        cin >> boy[i];
        m1[i] = true;
    }
    int k;
    cin >> k;
    vector<int> girl(k);
    for (int i = 0; i < k; i++)
    {
        cin >> girl[i];
    }
    sort(boy.begin(), boy.end());
    sort(girl.begin(), girl.end());
    int cnt = 0;
    for (int i = 0; i < girl.size(); i++)
    {
        for (int j = 0; j < boy.size(); j++)
        {
            if (m1[j] && mod(boy[j] - girl[i]) <= 1)
            {
                // cout << "boy = " << boy[j] << " girl = " << girl[i] << endl;
                cnt++;
                m1[j] = false;
                break;
            }
        }
    }
    cout << cnt << endl;
    return 0;
}