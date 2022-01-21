#include <bits/stdc++.h>
using namespace std;
#define c(x) cout << x << '\n';
typedef long long int ll;
int main()
{
    ll n, p;
    // scanf("%d, %d", &n, &p);
    cin >> n >> p;
    ll arr[p + 10] = {0};
    // memset(arr, 0, sizeof(arr));
    while (n--)
    {
        int i, r;
        // scanf("%d %d", &i, &r);
        cin >> i >> r;
        int j = ((i - r) >= 0) ? i - r : 0;
        // c(j);
        int end = i + r;
        arr[j]++;
        if (end <= p)
            arr[end + 1]--;
        // c(end)
        // while(j <= p && j <= end)
        // {
        //     if(arr[j] != -1)
        //         arr[j]++;
        //     if(arr[j] > 1)
        //         arr[j] = -1;
        //     j++;
        // }
    }
    for (ll i = 1; i <= p; i++)
        arr[i] += arr[i - 1];
    ll count = 0;
    ll mx = 1LL * INT_MIN;
    for (ll i = 0; i <= p; i++)
    {
        // c(arr[i]);
        if (arr[i] != 1)
        {
            count++;
            mx = max(count, mx);
        }
        else
            count = 0;
    }
    printf("%d\n", mx);
    return 0;
}