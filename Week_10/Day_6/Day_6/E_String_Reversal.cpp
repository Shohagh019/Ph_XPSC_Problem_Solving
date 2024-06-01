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
    int n;
    string s;
    cin>>n>>s;
    pbds<int> p;
    vector<vector<int>> v(26);
    map<int,int> mp;
    for(int i=0;i<n;i++) v[s[i]-'a'].push_back(i);
    reverse(s.begin(),s.end());
    ll ans=0;
    for(int i=0; i<n; i++)
    {
        int target=s[i]-'a';
        int val = v[target][mp[target]++];
        p.insert(val);
        int pos=p.order_of_key(val);
        val-=pos;
        ans+=val;
    }
    cout<<ans<<endl;
    return 0;
}