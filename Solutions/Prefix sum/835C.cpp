// question : https://codeforces.com/contest/835/problem/C#
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n, q, c;
    cin >> n >> q >> c;
    int cnt[11][101][101];
    memset(cnt, 0, sizeof(cnt));
    for (int i = 0; i < n; i++)
    {
        int x, y, s;
        cin >> x >> y >> s;
        cnt[s][x][y]++;
    }
    for (int p = 0; p <= c; p++)
    {
        for (int i = 1; i < 101; i++)
        {
            for (int j = 1; j < 101; j++)
                cnt[p][i][j] += cnt[p][i - 1][j] + cnt[p][i][j - 1] - cnt[p][i - 1][j - 1];
        }
    }
    while (q--)
    {
        int t, x1, y1, x2, y2;
        cin >> t >> x1 >> y1 >> x2 >> y2;
        int ans = 0;
        for (int p = 0; p <= c; p++)
        {
            int b = (p + t) % (c + 1);
            int a = cnt[p][x2][y2] - cnt[p][x1 - 1][y2] - cnt[p][x2][y1 - 1] + cnt[p][x1 - 1][y1 - 1];
            ans += b * a;
        }
        cout << ans << '\n';
    }
    return 0;
}
