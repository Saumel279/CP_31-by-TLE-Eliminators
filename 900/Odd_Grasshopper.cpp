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
    ll x, n;
    cin >> x >> n;
    ll d;
    if(n % 4 == 0) d = 0;
    else if(n % 4 == 1) d = -n;
    else if(n % 4 == 2) d = 1;
    else if(n % 4 == 3) d = n + 1;

    if(x % 2 == 0) cout << x + d << endl;
    else cout << x - d << endl;
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