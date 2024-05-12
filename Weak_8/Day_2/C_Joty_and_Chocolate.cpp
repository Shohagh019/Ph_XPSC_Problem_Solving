#include <bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;
ll gcd(ll a,ll b)
{
    return __gcd(a,b);
}
ll lcm(ll a, ll b)
{
    return ((a/gcd(a,b))*b);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,a,b,p,q;
    cin>>n>>a>>b>>p>>q;
    ll ans=0;
    ans+= (n/a)*p;
    ans+=(n/b)*q;
    ans-=(n/lcm(a,b)*min(p,q));
    cout<<ans<<endl;
    return 0;
}