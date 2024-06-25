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
    for(int i=0; i<n; i++) cin>>a[i];
    for(int i=0; i<n; i++)
    {
        ll ans= 32786-a[i];
        if(a[i]==0)
        {
            cout<<0<<" ";
            continue;
        }
        ll cur=0;
        for(int j=a[i]; j<=a[i]+15; j++)
        {
            cur=j-a[i];
            ll tmp=0;
            ll x=j;
            while(x%2==0)
            {
                x/=2;
                tmp++;
            }
            if(tmp<15) cur+= (15-tmp);
            ans= min(ans,cur);
        }
        cout<<ans<<" ";
    }
    return 0;
}