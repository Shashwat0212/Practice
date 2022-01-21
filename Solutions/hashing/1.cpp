#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	// cin >> s;
	getline(cin, s);
	int n = s.size();
	int arr[256];
	memset(arr, 0, sizeof(arr));
	int mx = INT_MIN;
	for(int i = 0; i < n; i++)
	{
		arr[s[i]]++;
		mx = max(mx, arr[s[i]]);
	}
	for(int i = 0; i < 256; i++)
	{
		if(arr[i] == mx)
		{
			cout << char(i) << ' ' << mx << '\n';
			break;
		}
	}
	return 0;
}