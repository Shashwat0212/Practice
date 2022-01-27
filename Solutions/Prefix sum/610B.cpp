// question: https://codeforces.com/contest/610/problem/B
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n;
    cin >> n;
    ll arr[n];
    ll mn = LONG_MAX;
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
        mn = min(mn, arr[i]);
    }
    ll ans = mn * n;
    ll a = 0, b = 0;
    for (ll i = 0; i < n; i++)
    {
        if (arr[i] > mn)
        {
            a++;
            b = max(a, b);
        }
        else
            a = 0;
    }
    b = 0;
    // The operation is repeated as the array is cyclic so we need to find the longest it can go without meeting the minimum
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > mn)
        {
            a++;
            b = max(a, b);
        }
        else
            a = 0;
    }
    b = max(b, a);
    cout << ans + b << '\n';
}