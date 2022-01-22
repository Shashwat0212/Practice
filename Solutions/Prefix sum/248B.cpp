// question: https://codeforces.com/contest/433/problem/B
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n, a[100001], b[100001], m, t, l, r;
    a[0] = 0, b[0] = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        b[i] = a[i];
    }
    cin >> m;
    sort(b, b + n + 1);
    for (int i = 1; i <= n; i++)
    {
        a[i] += a[i - 1];
        b[i] += b[i - 1];
    }
    // for(int i = 0; i < n; i++)
    while (m--)
    {
        cin >> t >> l >> r;
        if (t == 1)
            cout << a[r] - a[l - 1] << '\n';
        else
            cout << b[r] - b[l - 1] << '\n';
    }
    return 0;
}
