#include <bits/stdc++.h>
#define ll long long
#define edl '\n'
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        string empty;
        getline(cin, empty);

        ll n, k;
        cin >> n >> k;
        vector<ll> a(n+2);
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        map<ll,vector<ll>> mp;
        for(int i=0; i<n; i++)
        {
            mp[a[i]].push_back(i);
        }
        // cout<<mp[a[4]].back()<<endl;
        while(k--)
        {
            ll x,y;
            cin>>x>>y;
            if(mp[x].empty()|| mp[y].empty())
            {
                cout<<"NO"<<edl;
                continue;
            }
            if(x==y)
            {
                cout<<"YES"<<edl;
                continue;
            }
            if(mp[x].front()<mp[y].back())
            {
                cout<<"YES"<<edl;
            }
            else
            {
                cout<<"NO"<<edl;
            }
        }
    }
    return 0;
}
