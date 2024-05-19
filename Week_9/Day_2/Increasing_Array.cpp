#include <bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin>>n;
    vector<ll> a(n);
    for(ll i=0; i<n; i++)
    {
        cin>>a[i];
    }
    ll ans=0;
    for(ll i=1; i<n; i++)
    {
        if(a[i-1]>a[i])
        {
            ans+=a[i-1]-a[i];
            a[i]=a[i-1];
        }
        
    }
    cout<<ans<<endl;
    return 0;
}