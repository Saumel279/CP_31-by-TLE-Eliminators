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

const int mx = 1e5 + 123;
int ar[mx];
void solve()
{
    int ans = 0;
    int n; cin >> n;
    for(int i = 1; i <= n; i++) cin >> ar[i];
    for(int i = 1; i <= n; i++)
    {
        ans = __gcd(ans,abs(ar[i] - i));
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