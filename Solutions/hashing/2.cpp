#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    unordered_map<string, int> mp;
    for (int i = 0; i < n; i++)
    {
        string str;
        cin >> str;
        if (mp.find(str) != mp.end())
        {
            mp[str]++;
            cout << str << mp[str] - 1 << '\n';
        }
        else
        {
            mp[str]++;
            cout << "OK" << '\n';
        }
    }
}