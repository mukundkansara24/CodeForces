#include <bits/stdc++.h>
using namespace std;

void solve()
{
	long long n, k;
	cin >> n >> k;
	long long d;
	if (k % 4 == 0)
		d = 0;
	else if (k % 4 == 1)
		d = -1 * k;
	else if (k % 4 == 2)
		d = 1;
	else
		d = k + 1;
	if (n & 1)
	{
		n -= d;
	}
	else
	{
		n += d;
	}
	cout << n << endl;
}
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n;
	cin >> n;
	while (n--)
		solve();
}