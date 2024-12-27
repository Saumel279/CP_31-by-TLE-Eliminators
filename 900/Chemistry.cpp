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
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    map<char,int> m;
    for(int i = 0; i < n; i++)
    {
        m[s[i]]++;
    }
    int odd = 0, even = 0;
    for(auto u : m)
    {
        if(u.second % 2 == 0) even++;
        else odd++;
    }
    if(odd <= k || abs(odd - k) == 1)
    {
        yes;
    }
    else no;
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