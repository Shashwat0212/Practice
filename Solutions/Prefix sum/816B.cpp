// question : https://codeforces.com/contest/816/problem/B
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int n, k, q;
    cin >> n >> k >> q;
    int a[200010] = {0};
    int i_mx = INT_MIN, i_mn = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        int l, r;
        cin >> l >> r;
        a[l]++;
        a[r + 1]--;
        i_mn = min(i_mn, l);
        i_mx = max(i_mx, r);
    }
    for (int i = i_mn + 1; i < 200010; i++)
        a[i] += a[i - 1];
    for (int i = i_mn; i <= i_mx; i++)
    {
        if (a[i] >= k)
            a[i] = 1;
        else
            a[i] = 0;
    }
    for (int i = i_mn + 1; i < 200010; i++)
        a[i] += a[i - 1];
    while (q--)
    {
        int l, r;
        cin >> l >> r;
        cout << a[r] - a[l - 1] << '\n';
    }
    return 0;
}