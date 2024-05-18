#include<bits/stdc++.h>
#define ll long long
#define edl '\n'
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)
    {
        ll n;
        cin >> n;
        vector<ll> a(n);
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        vector<ll> pref(n);
        vector<ll> suff(n);
        pref[0]=a[0];
        suff[n-1]=a[n-1];
        for(int i=1; i<n; i++)
        {
            pref[i]=pref[i-1]+a[i];
        }
        for(int i=n-2; i>=0; i--)
        {
            suff[i]=suff[i+1]+a[i];
        }
        ll ans=1;
        for(int i=0; i<n-1; i++)
        {
            ans=max(ans,__gcd(pref[i],suff[i+1]));
        }
        cout<<ans<<endl;
    }
    return 0;
}