#include<bits/stdc++.h>
#define ll long long
#define edl '\n'
using namespace std;
const int N=100005;
vector<ll> arr(N);
vector<ll> d(N);
vector<ll> ans(N);
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m,k;
    cin>>n>>m>>k;
    for(int i=1;i<=n;i++) cin>>arr[i];
    vector<pair<int,int>> limit(m+1);
    vector<ll> val(m+1);
    for(int i=1; i<=m;i++)
    {
        int l,r,x;
        cin>>l>>r>>x;
        limit[i] = {l,r};
        val[i] = x;
    }
    for(int i=1; i<=k; i++)
    {
        int x,y;
        cin>>x>>y;
        d[x]++;
        d[y+1]--;
    }
    for(int i=1; i<=m; i++)
    {
        d[i]=d[i]+d[i-1];
    }
    for(int i=1; i<=m; i++)
    {
        val[i]=val[i]*d[i];
    }
    for(int i=1; i<=m; i++)
    {
        int l=limit[i].first;
        int r=limit[i].second;
        ans[l]+=val[i];
        ans[r+1]-=val[i];
    }
    for(int i=1; i<=n; i++) ans[i]+=ans[i-1];
    for(int i=1; i<=n; i++)
    {
        cout<<ans[i]+arr[i]<<" ";
    }
    return 0;
}