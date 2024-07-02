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
        map<ll,ll> mp;
        for(int i=1; i<=n; i++)
        {
            int x;
            cin>>x;
            mp[x-i]++;
        }
        ll ans=0;
        for(auto it: mp)
        {
            ll a=it.second;
            ans+=(a*(a-1))/2;
        }
        cout<<ans<<endl;
    }
    return 0;
}