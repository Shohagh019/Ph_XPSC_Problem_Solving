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
        int h,n;
        cin>>h>>n;
        vector<ll> a(n);
        vector<ll> b(n);
        for(ll i=0; i<n; i++) cin>>a[i];
        for(ll i=0; i<n; i++) cin>>b[i];
        ll sum=0;
        for(ll i=0; i<n; i++)
        {
            sum+=a[i];
        }
        ll power= h-sum;
        if(power<=0)
        {
            cout<<1<<endl;
            continue;
        }
        ll l=1, r= 1e12, ans = r, mid;
        while(l<=r)
        {
            mid=(l+r)/2;
            ll total=0;
            for(int i=0; i<n; i++)
            {
                total+= (mid/b[i])*a[i];
                if(total>=power) break;
            }
            if(total>= power)
            {
                ans=min(ans, mid);
                r=mid-1;
            }
            else
            {
                l=mid+1;
            }
        }
        cout<<ans+1<<endl;
    }
    return 0;
}