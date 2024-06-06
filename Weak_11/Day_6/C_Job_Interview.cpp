#include <bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;
ll a[200005], b[200005], n,m,tot;
map<array<ll,3>,ll> mp;
ll call(ll ind, ll x, ll y)
{
    if(ind==tot+1) return 0;
    if(mp.find({ind,x,y})!=mp.end()) return mp[{ind,x,y}];
    if((x&& a[ind]>=b[ind])|| !y)
    {
        return mp[{ind,x,y}]=a[ind]+ call(ind+1,x-1,y);
    }
    return mp[{ind,x,y}]=b[ind]+call(ind+1,x,y-1);
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        tot=m+n;
        for(int i=0; i<=tot; i++) cin>>a[i];
        for(int i=0; i<=tot; i++) cin>>b[i];
        ll ans=0;
        mp.clear();
        for(int i=0; i<=tot; i++)
        {
            cout<<ans+call(i+1,n,m)<<" ";
            if((n&& a[i]>=b[i])|| !m)
            {
                n--;
                ans+=a[i];
            } 
            else
            {
                m--;
                ans+=b[i];
            } 
        }
        cout<<endl;
    }
    return 0;
}