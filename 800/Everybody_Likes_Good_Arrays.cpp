#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double dl;

#define endl '\n'
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define nl cout << endl

#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for(auto &u : v) cin >> u;
    vector<pair<int,int>> p;
    for(int i = 0; i < n - 1; i++)
    {
        p.push_back({v[i], v[i + 1]});
    }
    int cnt = 0;
    for(auto u : p)
    {
        if(u.first % 2 == 0 && u.second % 2 == 0 || u.first % 2 != 0 && u.second % 2 != 0)
        cnt++;
    }
    cout << cnt << endl;
}
int main()
{
    optimize();

    int t = 1;
    cin >> t;
    while (t--)
        solve();

    return 0;
}