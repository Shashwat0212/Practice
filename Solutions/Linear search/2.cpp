#include<bits/stdc++.h>
using namespace std;
#define c(x) cout << x << '\n';
int main()
{
	int n;
	cin >> n;
	// for(int i = 0; i < n; i++)cin >> arr[i];
	long long sum = 0;
	int mx = INT_MIN;
	int cnt = 0;
	for(int i = 0; i < n; i++)
	{
		int x;
		cin >> x;
		if(x >= 0) sum += 1LL * x, cnt++;
		mx = max(mx, x); 
	}
	if(cnt)cout << sum << ' ' << cnt << '\n';
	else cout << mx << ' ' << 1 << '\n';
	// cout << sum << ' ' << cnt << '\n';
}
