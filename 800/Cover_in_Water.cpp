#include <bits/stdc++.h>
using namespace std;
 
int main() 
{
    int t; cin >> t;
    while(t--)
    {
      int n;
      cin >> n;
      string s;
      cin >> s;
      
      int cnt = 0,dot = 0,hash = 0;
      
      for(int i = 0; i < n; i++)
      {
        if(s[i] == '.')
        {
          dot++;
        }
        else
        {
          hash++;
          dot = 0;
        }
        if(dot == 3)
        {
          cnt++;
          dot = 0;
        }
      }
      if(hash == n)
      {
        cout << 0 << endl;
      }
      else if(cnt == 0)
      {
        cout << n - hash << endl;
      }
      else
      {
        cout << 2 << endl;
      }
    }
    return 0;
}