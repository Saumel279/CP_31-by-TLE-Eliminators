#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n, m;
    cin >> n >> m;
    string x, s;
    cin >> x >> s;
 
    if (x.find(s) != string::npos)
    {
        cout << 0 << endl;
        return;
    }
    if (x.size() >= s.size())
    {
        x += x;
        if (x.find(s) != string::npos)
        {
            cout << 1 << endl;
        }
        else
            cout << -1 << endl;
    }
    else
    {
        int cnt = 0;
        bool found = false;
        while (x.size() <= 25)
        {
            x += x;
            cnt++;
            if (x.find(s) != string::npos)
            {
                found = true;
                break;
            }
        }
        if (found)
            cout << cnt << endl;
        else
        {
            cout << -1 << endl;
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