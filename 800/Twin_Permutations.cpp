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
    int a[n];
    for(int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    int ans[n];
    
    for(int i = 1; i <= n; i++)
    {
        cout << (n - a[i]) + 1 << " ";
    }
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