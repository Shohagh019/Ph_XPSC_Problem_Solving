#include<bits/stdc++.h>
#define ll long long
#define edl '\n'
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while(t--)
    {
        ll a,b,n,s;
        cin>>a>>b>>n>>s;
        ll x= s%n;
        if(x<=b && a*n+b>=s) cout<<"YES"<<edl;
        else cout<<"NO"<<edl;
    }
    return 0;
}