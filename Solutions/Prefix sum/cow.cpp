#include <bits/stdc++.h>
#define ll long long int
#define mod 1000000007
using namespace std;

int main()
{
    ll ans[1000002], ans1[1000002];
    memset(ans1, 0, sizeof(ans1));
    memset(ans, 0, sizeof(ans));
    ll n, q, l, r;
    cin >> n >> q;
    while (q--)
    {
        cin >> l >> r;
        ans[l] += 1;
        ans[r + 1] -= 1;            //normal differnce array
        ans1[r + 1] -= (r - l + 1); // keeping track of the extra which comes from i-l so saving it at r=1 as r-l the max value
    }
    for (int i = 1; i <= n; i++)
        ans[i] += ans[i - 1];
    for (int i = 1; i <= n; i++)
        ans1[i] += ans1[i - 1] + ans[i];
    cin >> q;
    while (q--)
    {
        cin >> l;
        cout << ans1[l] << endl;
    }
}