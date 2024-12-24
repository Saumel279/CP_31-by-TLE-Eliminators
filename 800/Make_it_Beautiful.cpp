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
    vector<int> v(n); for(auto &u : v) cin >> u;

    int cnt = 1, temp = v[0];
    for(int i = 1; i < n; i++)
    {
        if(temp == v[i])
        {
            cnt++;
            temp = v[i];
        }
    }
    if(cnt == n) { no; return; }
    sort(v.rbegin(), v.rend());
    if(v[0] == v[1])
    {
        for(int i = 2; i < n; i++)
        {
            if(v[0] != v[1]) break;
            swap(v[0],v[i]);
        }
    }
    yes;
    for(auto u : v) cout << u << " ";
    nl;
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