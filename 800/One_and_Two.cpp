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
    int one = 0, two = 0;
    vector<int> v(n); for(auto &u : v) { cin >> u; if(u == 1) one++; else two++;}
    if(two == 0) { cout << 1 << endl; return; }
    if(two % 2 != 0) { cout << - 1 << endl; return; }
    int puku = two / 2;
    int cnt = 0, ans = 0;
    for(int i = 0; i < n; i++)
    {
        if(v[i] == 2) cnt++;
        if(cnt == puku) { ans = i + 1; break; }
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