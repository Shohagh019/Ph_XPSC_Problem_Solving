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
        ll n;
        cin>>n;
        vector<ll> a(n);
        map<ll,ll> mp;
        for(ll i=0;i<n; i++)
        {
            cin>>a[i];
            mp[a[i]]++;
        }
        ll mx=0;
        for(auto it=mp.begin(); it!=mp.end(); it++)
        {
            mx=max(mx,it->second);
        }
        ll ans= n-mx;
        if(ans>=mx)
        {
            if(n%2==0)
            {
                cout<<0<<endl;
            }
            else cout<<1<<endl;
        } 
        else if(ans==0) cout<<mx<<endl;
        else
        {
            cout<<mx-ans<<endl;
        } 
    }
    return 0;
}