#include<bits/stdc++.h>
#define ll long long
#define edl '\n'
using namespace std;
const int mod=1e9+7;
ll binpow(ll a, ll b) {
    ll res = 1;
    while (b > 0) {
        if (b & 1)
            res = res * a;
            res=res%mod;
        a = a * a;
        a = a % mod;
        b >>= 1;
    }
    return res%mod;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        ll ans=0;
        for(ll i=0; i<32; i++)
        {
            if((1<<i)&(k))
            {
                ans+=(binpow(n,i));
            }
        }
        cout<<ans%mod<<endl;
    }
    return 0;
}