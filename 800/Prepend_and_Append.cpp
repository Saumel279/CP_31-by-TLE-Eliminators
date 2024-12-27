#include <iostream>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int x = 0;

    if(s[0] == s[n - 1])
    {
        cout << n << endl;
        return;
    }
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == s[s.size() - 1])
        {
            break;
        }
        else
        {
            x++;
            s.pop_back();
        }
    }
    // s.erase(s.begin() + x);
    // if(s.empty()) cout << 0 << endl;
    // else
    cout << s.size() - x << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}