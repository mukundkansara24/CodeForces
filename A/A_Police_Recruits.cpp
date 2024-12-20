#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, temp, temp2;
    stack<int> st;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        if (temp < 0)
        {
            if (!st.empty() && st.top() == -1)
                st.push(temp);
            else if (!st.empty() && st.top() > 0)
            {
                temp2 = st.top();
                st.pop();
                temp2 = temp2 + temp;
                if (temp2 != 0)
                    st.push(temp2);
            }
            else
                st.push(temp);
        }
        else if (temp > 0)
        {
            st.push(temp);
        }
    }
    temp2 = 0;
    while (!st.empty())
    {
        if (st.top() > 0)
            st.pop();
        else
        {
            temp2 = temp2 + st.top();
            st.pop();
        }
    }
    cout << (-1) * temp2 << endl;
    return 0;
}