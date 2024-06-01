#include <bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
#define ll long long int
#define endl '\n'
using namespace std;
template <typename T> using pbds = tree<T, null_type, greater_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;
void solve()
{
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0; i<n; i++) cin>>a[i];
    int ans=0;
    pbds<int> p;
    map<int,int> mp;
    for(int i=0; i<n; i++)
    {
        p.insert(a[i]);
        ans+= p.order_of_key(a[i])+ mp[a[i]];
        mp[a[i]]++;
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