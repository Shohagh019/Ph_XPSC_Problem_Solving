#include<bits/stdc++.h>
#define ll long long
#define edl '\n'
using namespace std;
ll get_length(ll n)
{
    ll cnt=0;
    while(n!=0)
    {
        cnt++;
        n=n>>1;
    }
    return cnt;
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
        vector<ll> a(n);
        vector<ll> bt_length(n);
        map<ll,ll> mp;
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
            bt_length[i]= get_length(a[i]);
            mp[bt_length[i]]++;
        }
        ll count = 0;
        for(auto it= mp.begin(); it != mp.end(); it++)
        {
            ll x= it->second;
            count+= x*(x-1)/2;
        }
        cout<<count<<edl;
    }
    return 0;
}