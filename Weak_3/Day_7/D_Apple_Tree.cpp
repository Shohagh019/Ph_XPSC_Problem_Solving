#include<bits/stdc++.h>
#define ll long long
#define edl '\n'
using namespace std;
const int N= 2e5+5;
vector<ll> adj[N];
ll cnt[N];
void dfs(ll src, ll p)
{
    if(adj[src].size()==1 && src!=1)
    {
        cnt[src] =1;
    }
    for(ll child: adj[src])
    {
        if(child!=p)
        {
            dfs(child,src);
            cnt[src]+=cnt[child];
        }
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while(t--)
    {
        ll n;
        cin >> n;
        for(ll i=1; i<=n; i++)
        {
            cnt[i] = 0;
            adj[i].clear();
        }
        for(ll i=1; i<n; i++)
        {
            ll a,b;
            cin >> a >> b;
            adj[a].push_back(b);
            adj[b].push_back(a);
        }
        dfs(1,-1);
        ll q;
        cin >> q;
        while(q--)
        {
            ll x,y;
            cin >> x >> y;
            cout<<cnt[x]*cnt[y]<<edl;
        }
    }
    return 0;
}