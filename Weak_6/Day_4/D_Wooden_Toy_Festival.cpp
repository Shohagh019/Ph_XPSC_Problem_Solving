#include <bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;
const ll maxN=1e11+5;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<ll> a(n);
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        sort(a.begin(),a.end());
        auto solve=[&](ll x)
        {
            int cnt=1;
            for(int l=0,r=l+1;r<n;)
            {
                if(x>=(a[r]-a[l]+1)/2)
                {
                    r++;
                }
                else
                {
                    cnt++;
                    l=r;
                }
            }
            return cnt<4;
        };
        ll l=0, r= maxN-1, ans=0, mid;
        while(l<=r)
        {
            mid=(l+r)/2;
            if(solve(mid))
            {
                ans=mid;
                r=mid-1;
            }
            else
            {
                l=mid+1;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}