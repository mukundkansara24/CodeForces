#include <bits/stdc++.h>
using namespace std;
void solve()
{
	string s;
	cin >> s;
	int n = s.length();
	if ((s[n - 1] == '5' && (s[n - 2] == '2' || s[n - 2] == '7')) || (s[n - 1] == '0' && (s[n - 2] == '5' || s[n - 2] == '0')))
		cout << 0 << endl;
	else
	{
		int i = n - 1, cnt = 0, mincnt = 0;
		while (i >= 0 && s[i] != '5')
		{
			i--;
			cnt++;
		}
		// cout << "cnt1 = " << cnt << endl;
		i--;
		while (i >= 0)
		{
			// cout << "s = " << s[i] << endl;
			if(s[i] == '2' || s[i] == '7')
				break;
			i--;
			cnt++;
		}
		// cout << "cnt2 = " << cnt << endl;
		mincnt = cnt;
		// cout << "mincnt = " << mincnt << endl;
		cnt = 0, i = n-1;

		while (i >= 0 && s[i] != '0')
		{
			i--;
			cnt++;
		}
		i--;
		while (i >= 0)
		{
			if(s[i] == '0' || s[i] == '5')
				break;
			i--;
			cnt++;
		}
		mincnt = min(cnt, mincnt);
		cout << mincnt << endl;
	}
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