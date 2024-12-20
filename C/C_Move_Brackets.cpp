#include <iostream>
#include <stack>
#include <string>
using namespace std;
int BracketCounter(string a)
{
    int n = a.length(), cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == ')')
            cnt++;
    }
    return cnt;
}
void Reverse(string &a)
{
    int n = a.length();
    for (int i = 0; i < n / 2; i++)
    {
        swap(a[i], a[n - 1 - i]);
    }
}
string StackToString(stack<char> s)
{
    string a;
    while (!s.empty())
    {
        a.push_back(s.top());
        s.pop();
    }
    Reverse(a);
    return a;
}
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        stack<char> s;
        int t;
        cin >> t;
        string a;
        cin >> a;
        for (int i = 0; i < t; i++)
        {
            if (a[i] == '(')
            {
                s.push('(');
            }
            else if (!s.empty() && a[i] == ')')
            {
                if (s.top() == '(')
                {
                    s.pop();
                }
                else
                {
                    s.push(')');
                }
            }
            else
            {
                s.push(a[i]);
            }
        }
        cout << BracketCounter(StackToString(s)) << endl;
    }
    return 0;
}