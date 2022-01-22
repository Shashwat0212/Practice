#include <bits/stdc++.h>
using namespace std;
#define c(x) cout << x << '\n';
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int n = s.size();
        int c1 = 0, c2 = 1;
        for (int i = 0; i < n; i++)
            if (s[i] == '1')
                c1++;
        for (int i = 0; i < n - 1; i++)
            if (s[i] == '1' && s[i + 1] == '1')
                c2++;
        if (c1 == c2)
            cout << "YES" << '\n';
        else
            cout << "NO" << '\n';
    }
}