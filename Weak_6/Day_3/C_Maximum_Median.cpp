#include <bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n,k;
    cin>>n>>k;
    vector<int> a(n);
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    auto ok=[&](ll m)
    {
        ll median = n/2;
        ll tmp=0;
        for(int i=median; i<n; i++)
        {
            if(a[i]<m)
            {
                tmp+= (m-a[i]);
            }
        }
        return tmp<=k;
    };
    ll l=1, r=2e9, ans=0,mid;
    while(l<=r)
    {
        mid=(l+r)/2;
        if(ok(mid))
        {
            ans=mid;
            l=mid+1;
        }
        else
        {
            r=mid-1;
        }
    }
    cout<<ans<<endl;
    return 0;
}