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
void solve();
int main()
{
    optimize();

    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }

    return 0;
}

void solve()
{
    int n,k,x;
    cin >> n >> k >> x;

    if(x != 1)
    {
        yes;
        cout << n << endl;
        for(int i = 0; i < n; i++) cout << 1 << " ";
        nl;
    }   
    else
    {
        if(k == 1)
        {
            no;
            return;
        }
        if(n % 2 != 0)
        {
            if(k <= 2)
            {
                no;
            }
            else
            {
                yes;
                int temp = 3;
                int cnt = 1;
                while(temp != n)
                {
                    temp += 2;
                    cnt++;
                }
                cout << cnt << endl << 3 << " ";
                for(int i = 0; i < cnt - 1; i++) cout << 2 << " ";
                nl;
            }
        }
        else
        {
            if(n % 2 == 0)
            {
                yes;
                cout << n / 2 << endl;
                for(int i = 0; i < n/2; i++)
                cout << 2 << " ";
                nl;
            }
        }
    } 
}