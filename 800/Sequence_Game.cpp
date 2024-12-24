#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<long long> v(n);
    for(auto &u : v) cin >> u;
    bool yes = is_sorted(v.begin(),v.end());
    
    if(yes)
    {
        cout << n << endl;
        for(auto u : v) cout << u << " ";
        cout << endl;
        return;
    }
    else
    {
        vector<long long> ans;
        ans.push_back(v[0]);
        for(int i = 1; i < n; i++)
        {
            if(v[i-1] <= v[i])
            {
                ans.push_back(v[i]);
            }
            else
            {
                ans.push_back(1);
                ans.push_back(v[i]);
            }
        }
        cout << ans.size() << endl;
        for(auto u : ans) cout << u << " ";
        cout << endl;
    }
}
int main()
{
 
    int t ;
    cin >> t;
    while (t--)
    {
        solve();
    }
}