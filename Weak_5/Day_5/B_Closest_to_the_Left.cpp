#include<bits/stdc++.h>
#define ll long long
#define edl '\n'
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,k;
    cin>>n>>k;
    vector<ll> a(n);
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    while(k--)
    {
        ll x;
        cin>>x;
        auto it = upper_bound(a.begin(), a.end(),x)-a.begin();
        cout<<it<<edl;
    }
    return 0;
}