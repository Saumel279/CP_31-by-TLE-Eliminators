#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;
typedef pair<int, int> pii;
typedef pair<double, double> pdd;
typedef pair<ll, ll> pll;
typedef vector<pii> vii;
typedef vector<pll> vll;
typedef double dl;
 
#define PB push_back
#define F first
#define S second
#define MP make_pair
#define endl '\n'
#define all(a) (a).begin(), (a).end()
#define sz(x) (int)x.size()
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define nl cout << endl
#define mx_int_prime 999999937
 
const double PI = acos(-1);
const double eps = 1e-9;
const int inf = 2000000000;
const ll infLL = 9000000000000000000;
#define MOD 1000000007
 
#define mem(a, b) memset(a, b, sizeof(a))
#define gcd(a, b) __gcd(a, b)
#define sqr(a) ((a) * (a))
 
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define fraction()                \
    cout.unsetf(ios::floatfield); \
    cout.precision(10);           \
    cout.setf(ios::fixed, ios::floatfield);
 
void solve()
{
    int n, one = 0, m_one = 0;
    cin >> n;
    vi v(n);
    int pod = 1,sum = 0;
    for (auto &u : v)
    {
        cin >> u;
        if (u == 1)
            one++;
        else
            m_one++;
    }
    
    if(m_one >= one)
    {
        int cnt = 0;
        while(m_one > one)
        {
            m_one--;
            one++;
            cnt++;
        }
        if(m_one % 2 != 0) cnt++;
        cout << cnt << endl;
    }
    else
    {
        int cnt = 0;
        if(m_one % 2 == 0)
        {
            cout << 0 << endl;
        }
        else
        {
            while(m_one % 2 != 0)
            {
                one++;
                m_one--;
                cnt++;
            }
            cout << cnt << endl;
        }
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