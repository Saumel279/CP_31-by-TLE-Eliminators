#include <bits/stdc++.h>
using namespace std;
 
int main() 
{
    int t;
    cin >> t;
    while(t--)
    {
      int n,k;
      cin >> n >> k;
      vector<int> v(n);
      bool yes = false;
      
      for(int i = 0; i < n; i++) 
      {
        cin >> v[i];
        if(v[i] == k) yes = true;
      }
      if(yes) cout << "YES" << endl;
      else cout << "NO" << endl;
    }
    return 0;
}