#include <iostream>
using namespace std;
void NotDivisible(int a, int b)
{
    
}
int main()
{
    int n,total,rem;
    cin >> n;
    int **arr = new int* [n];
    for (int i =0; i < n; i++)
    {
        arr[i] = new int [2];
        cin >> arr[i][0];
        cin >> arr[i][1];
        NotDivisible(arr[i][0],arr[i][1]);
    }
    return 0;
}