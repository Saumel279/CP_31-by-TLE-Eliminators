#include <iostream>
using namespace std;

int main() 
{
    int t;
    cin >> t;
    while(t--)
    {
      long long n;
      cin >> n;
      long long pod = 0,cnt = 0;
      
      if(n == 1) cout << 0 << endl;
      else if(n <= 2) cout << -1 << endl;
      else
      {
        while(n != 1)
       {
         if(n <= 1)
         {
           cnt = 0;
           break;
         }
         if(n % 6 == 0)
         {
            cnt++;
           n = n / 6;
         }
          else
          {
           n = n * 2;
           cnt++;
          }
       }
       cout << ((cnt == 0)? -1 : cnt) << endl;
      }
      
    }
    return 0;
}