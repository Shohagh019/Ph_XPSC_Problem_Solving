#include <bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        map<int,int> mp;
        int cur=0;
        mp[cur]++;
        ll ans =0;
        for(auto c:s)
        {
            cur+= (c=='('? +1: -1);
            ans+= mp[cur];
            mp[cur]++;
            while(mp.begin()->first*2<cur)
            {
                mp.erase(mp.begin());
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}