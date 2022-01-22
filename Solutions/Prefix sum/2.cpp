#include <bits/stdc++.h>
using namespace std;
#define c(x) cout << x;
int main()
{
    int t;
    cin >> t;
    // c(t);
    while (t--)
    {
        int n;
        cin >> n;
        // c(n);
        long long count = 0;
        for (int i = 0; i < n; i++)
        {
            long long x;
            cin >> x;
            // c(x);
            if (x != -1)
            {
                count += x;
                cout << x << ' ';
            }
            else
            {
                // cout << floor(count / (i)) << ' ';
                // count += floor(count / (i));
                cout << count / (1LL * i) << ' ';
                count += count / (1LL * i);
            }
            // c(count);
        }
        cout << '\n';
    }
    return 0;
}
