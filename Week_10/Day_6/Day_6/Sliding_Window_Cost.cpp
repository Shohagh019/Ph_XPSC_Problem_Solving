#include <bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
#define ll long long int
#define endl '\n'
using namespace std;
template <typename T> using pbds = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,k;
    cin>>n>>k;
    vector<ll> a(n);
    for(int i=0; i<n; i++) cin>>a[i];
    pbds<ll> p;
    for(int i=0; i<k; i++) p.insert(a[i]);
    ll pos=(k+1)/2-1;
    ll mid= *p.find_by_order(pos);
    ll ans=0;
    for(int i=0; i<k; i++) ans+= abs(mid-a[i]);
    cout<<ans;
    for(int i=0; i<n-k; i++)
    {
        p.erase(p.find_by_order(p.order_of_key(a[i])));
        p.insert(a[i+k]);
        ll m= *p.find_by_order(pos);
        ans= ans+abs(a[k+i]-m)-abs(mid-a[i]);
        if(k%2==0) ans-=(m-mid);
        mid=m;
        cout<<" "<<ans;
    }
    return 0;
}