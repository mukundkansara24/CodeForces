#include <iostream>
#include <string>
using namespace std;

int main()
{
    int no;
    cin >> no;
    string *arr = new string[no];
    for (int i = 0; i < no; i++)
    {
        cin >> arr[i];
        if (arr[i].length() <= 10)
        {
            cout << arr[i] << endl;
        }
        else
        {
            int count = 0;
            string ans;
            ans = arr[i][0];
            for (int j = 1; j < arr[i].length() - 1; j++)
            {
                count++;
            }
            ans.append(to_string(count));
            ans.push_back(arr[i][arr[i].length() - 1]);
            cout << ans << endl;
        }
    }
    return 0;
}