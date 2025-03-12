#include <bits/stdc++.h>
using namespace std;
void solve()
{
	int n;
	cin >> n;
	int c0 = 0, c1 = 0, temp;
	for(int i = 0; i < n; i++)
	{
		cin >> temp;
		if(temp == 0)
			c0++;
		else if(temp == 1)
			c1++;
	}
	if(c1 > 0)
	{
		cout << (long long)pow(2,c0)*c1 << endl;
	}
	else
	{
		cout << 0 << endl;
	}
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif
    int n;
    cin >> n;
    while(n--)
    	solve();
}