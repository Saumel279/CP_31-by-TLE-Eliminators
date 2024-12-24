#include <iostream>
 
using namespace std;
 
int main()
{
    int t,vova = 0;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int c = 0;
        if((n+1)%3==0||(n-1)%3==0)
        {
            cout<<"First"<<endl;
        }
        else if((n+1)%3!=0||(n-1)%3!=0)
        {
            cout<<"Second"<<endl;
            vova++;
        }
        // if(vova==10)
        // {
        //     cout<<"Second"<<endl;
        //     vova = 0;
        // }
    }
    return 0;
}