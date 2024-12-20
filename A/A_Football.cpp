#include <bits/stdc++.h>
using namespace std;
bool StringComp(string a, string b)
{
    if (a.length() != b.length())
        return false;
    else
    {
        for (int i = 0; i < a.length(); i++)
        {
            if (a[i] != b[i])
                return false;
        }
        return true;
    }
}
void Result(string *arr, int n)
{
    bool *ch = new bool[n];
    for (int i = 0; i < n; i++)
    {
        ch[i] = false;
    }
    int *cnt = new int[n];
    for (int i = 0; i < n; i++)
    {
        cnt[i] = 0;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (StringComp(arr[i], arr[j]) && !ch[j])
            {
                cnt[i]++;
                ch[j] = true;
            }
        }
    }
    int max = cnt[0], ind = 0;
    for (int i = 0; i < n; i++)
    {
        if (max < cnt[i])
        {
            max = cnt[i];
            ind = i;
        }
    }
    cout << arr[ind] << endl;
}
int main()
{
    int n;
    cin >> n;
    string *arr = new string[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    Result(arr, n);
    return 0;
}