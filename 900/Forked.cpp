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
    optimize();

    ll a, b, xk, yk, xq, yq;
    cin >> a >> b;
    cin >> xk >> yk;
    cin >> xq >> yq;

    vector<ll> dx = {-a,-a,a,a,b,-b,b,-b};
    vector<ll> dy = {-b,b,-b,b,a,-a,-a,a};

    set<pair<ll,ll>> dexk;
    set<pair<ll,ll>> dexq;

    for(int i = 0; i < 8; i++)
    {
        dexk.insert({xk + dx[i],yk + dy[i]});
        dexq.insert({xq + dx[i],yq + dy[i]});
    }
    int ans = 0;
    for(auto u : dexk)
    {
        if(dexq.find(u) != dexq.end())
        {
            ans++;
        }
    }
    cout << ans << endl;
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