#include <bits/stdc++.h>
using namespace std;
void solve()
{
	string s;
	cin >> s;
	int n = s.length();
	if (s[0] == s[n - 1])
		cout << s << endl;
	else
	{
		if (s[0] == 'a')
		{
			s[n - 1] = 'a';
			cout << s << endl;
		}
		else
		{
			s[n - 1] = 'b';
			cout << s << endl;
		}
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
	return 0;
}