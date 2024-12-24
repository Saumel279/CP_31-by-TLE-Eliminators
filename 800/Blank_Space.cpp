#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;
        vector<int>v(n);
        for(int i = 0; i < n; i++) cin >> v[i];
        
        int count = 0, ans = 0;
        for(int i = 0; i < v.size(); i++)
        {
            if(v[i] == 0)
            {
                count++;
            }
            else
            {
                ans = max(ans , count);
                count = 0;
            }
        }
        cout<<max(ans, count)<<endl;
    }
    return 0;
}