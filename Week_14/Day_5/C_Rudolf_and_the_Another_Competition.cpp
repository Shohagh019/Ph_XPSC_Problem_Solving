#include <bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;
void solve()
{
    ll n,m,h;
    cin>>n>>m>>h;
    vector<pair<pair<ll,ll>,ll>> ans;
    for(ll i=0; i<n; i++)
    {
        vector<ll> a(m);
        for(ll j=0; j<m; j++) cin>>a[j];
        sort(a.begin(),a.end());
        ll sum=0,cnt=0,pen=0;
        for(ll j=0; j<m; j++)
        {
            if(sum+a[j]<=h)
            {
                sum+=a[j],cnt++,pen+=sum;
            }
            else break;
        }
        ans.push_back({{cnt,-pen},-(i+1)});

    }
    sort(ans.begin(), ans.end(),greater<pair<pair<int,int>,int>>());
    for(ll i=0; i<n; i++)
    {
        if(ans[i].second==-(1))
        {
            cout<<i+1<<endl;
            return;
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}