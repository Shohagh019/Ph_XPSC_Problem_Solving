#include <bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
#define ll long long int
#define endl '\n'
using namespace std;
template <typename T> using pbds = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;
void solve()
{
    ll n,c,d;
    cin>>n>>c>>d;
    vector<ll> a(n);
    for(int i=0; i<n;  i++) cin>>a[i];
    sort(a.rbegin(), a.rend());
    ll l=0, r=d+2, k;
    while(l<r)
    {
        k= l+(r-l+1)/2;
        ll total=0;
        for(int i=0; i<d; i++)
        {
            if(i%k<n)
            {
                total+= a[i%k];
            }
        }
        if(total>=c)
        {
            l=k;
        }
        else
        {
            r=k-1;
        }
    }
    if(l==d+2)
    {
        cout<<"Infinity"<<endl;
        return;
    }
    if(l==0)
    {
        cout<<"Impossible"<<endl;
        return;
    }
    cout<<l-1<<endl;
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