#include<bits/stdc++.h>
#define ll long long
#define edl '\n'
using namespace std;
const ll maxN=2e9+5;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)
    {
        ll n,x;
        cin>>n>>x;
        vector<ll> a(n);
        for(int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        sort(a.begin(), a.end());
        auto ans=[&](int h)
        {
            ll total=0;
            for(int i = 0; i < n; i++)
            {
                if(a[i]<h)
                {
                    total+= (h-a[i]);
                }
            }
            return total<=x;
        };
        ll l=1, r=maxN,mid;
        ll result=0;
        while(l<=r)
        {
            mid=(l+r)/2;
            if(ans(mid))
            {
                result=mid;
                l=mid+1;
            }
            else
            {
                r=mid-1;
            }
        }
        cout<<result<<endl;
    }
    return 0;
}