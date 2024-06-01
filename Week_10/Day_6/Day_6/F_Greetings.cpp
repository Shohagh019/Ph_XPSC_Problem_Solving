#include <bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
#define ll long long int
#define endl '\n'
using namespace std;
template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
void solve()
{
    int n;
    cin>>n;
    vector<vector<ll>> a(n, vector<ll>(2));
    for(int i=0; i<n; i++) cin>>a[i][0]>>a[i][1];
    sort(a.begin(),a.end());
    pbds<ll> p;
    for(int i=0; i<n; i++)
    {
        p.insert(a[i][1]);
    }
    ll ans=0;
    for(int i=0; i<n; i++)
    {
        ans+= p.order_of_key(a[i][1]);
        p.erase(a[i][1]);
    }
    cout<<ans<<endl;
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