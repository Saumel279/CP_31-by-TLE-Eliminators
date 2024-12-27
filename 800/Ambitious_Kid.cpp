#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> v;
    for(int i = 0; i < n; i++)
    {
        int u;
        cin >> u;
        v.push_back(abs(u));
    }
    auto it = *min_element(v.begin(),v.end());
    cout << abs(it) << endl;
    
}
int main()
{
 
    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
}
// solved