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
    ll a, b, c, d; cin >> a >> b >> c >> d;
    if(d < b){ cout << -1 << endl; return; }
    int temp = d - b;
    if(a < c - temp) { cout << -1 << endl; return; }
    ll ans = a - c + temp + temp;
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