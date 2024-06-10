#include <bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        ll n,k;
        cin>>n>>k;
        map<ll,ll> mp;
        for(int i=0; i<n; i++)
        {
            ll x;
            cin>>x;
            for(int j=0; j<31; j++)
            {
                if(x&1)
                {
                    mp[j]++;
                }
                x=(x>>1);
            }
        }
        ll ans=0;
        for(int i=30; i>=0; i--)
        {
            ll y=n-mp[i];
            if(k>=y)
            {
                ans+= pow(2,i);
                k-=y;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}