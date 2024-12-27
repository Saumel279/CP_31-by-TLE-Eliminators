#include <bits/stdc++.h>
using namespace std;
const long long infLL = 9000000000000000000;
void solve()
{
    int n;
    cin >> n;
    vector<long long> a(n);
    long long mini = infLL;
    for (auto &u : a)
    {
        cin >> u;
        mini = min(u, mini);
    }
    vector<long long> b;
    vector<long long> c;
 
    for (int i = 0; i < n; i++)
    {
        if (a[i] == mini)
        {
            b.push_back(a[i]);
        }
        else
        {
            c.push_back(a[i]);
        }
    }
    if (c.size() == 0)
        cout << -1 << endl;
    else
    {
        cout << b.size() << " " << c.size() << endl;
        for (auto u : b)
            cout << u << " ";
        cout << endl;
        for (auto u : c)
            cout << u << " ";
        cout << endl;
    }
}
int main()
{
 
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}