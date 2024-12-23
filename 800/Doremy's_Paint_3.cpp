#include <bits/stdc++.h>
using namespace std;
void solve()
{
  int n;
  cin >> n;
  vector<int> v(n);
  int maxi = INT_MIN;
  for (int i = 0; i < n; i++)
  {
    cin >> v[i];
    maxi = max(v[i], maxi);
  }
 
  vector<int> f(maxi + 1, 0);
 
  for (int i = 0; i < n; i++)
  {
    f[v[i]]++;
  }
 
  sort(v.begin(), v.end());
  int sz = unique(v.begin(), v.end()) - v.begin();
  if (sz == 1 || n == 2)
  {
    cout << "YES" << endl;
  }
  else if (sz > 2)
    cout << "NO" << endl;
  else
  {
    bool yes = false;
    for (int i = 0; i < f.size(); i++)
    {
      if (f[i] == 0)
        continue;
      else
      {
        if (n % 2 == 0)
        {
          if (f[i] == (n / 2))
          {
            yes = true;
          }
        }
        else
        {
          if (f[i] == (n / 2) || f[i] == (n / 2) + 1)
          {
            yes = true;
          }
        }
      }
    }
    if (yes)
      cout << "YES" << endl;
    else
      cout << "NO" << endl;
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
  return 0;
}