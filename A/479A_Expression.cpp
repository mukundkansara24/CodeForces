    #include <bits/stdc++.h>
    using namespace std;
    int max(int *arr)
    {
        int maxi = arr[0];
        for (int i = 1; i < 5; i++)
        {
            if(arr[i]>maxi)
                maxi = arr[i];
        }
        return maxi;
    }
    int main()
    {
        int a, b, c;
        cin >> a >> b >> c;
        int arr[5] = {(a * b) + c, (a + b) * c, a * b * c, a + b + c, a * (b + c)};
        cout << max(arr) << endl;
        return 0;
    }