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
        ll n,l,r;
        cin>>n>>l>>r;
        vector<ll> a(n);
        for(int i=0; i<n; i++) cin>>a[i];
        ll ans=0, sum=0, j=0;
        for(int i=0; i<n; i++)
        {
            sum+=a[i];
            if(sum<l) continue;
            if(sum<=r)
            {
                ans++;
                sum=0;
                j=i+1;
                continue;
            }
            while(j<=i && sum>r)
            {
                sum-=a[j];
                j++;
            }
            if(sum>=l)
            {
                ans++;
                j=i+1;
                sum=0;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}