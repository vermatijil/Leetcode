#include <iostream>
#include <vector>
#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

int findContentChildren(vector<int> &g, vector<int> &s)
{
    sort(g.begin(), g.end());
    sort(s.begin(), s.end());
    int count = 0;
    int curr = g.size();
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] >= g[i] and curr != 0)
        {
            count++;
            curr--;
        }
    }
    return count;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<int> g(n);
        vector<int> s(m);
        for (int i = 0; i < n; i++)
        {
            cin >> g[i];
        }
        for (int i = 0; i < m; i++)
        {
            cin >> s[i];
        }
        cout << findContentChildren(g, s);
        cout << endl;
    }
    return 0;
}