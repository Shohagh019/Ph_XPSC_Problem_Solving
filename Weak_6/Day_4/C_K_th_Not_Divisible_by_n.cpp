#include<bits/stdc++.h>
#define ll long long
#define edl '\n'
using namespace std;
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
        ll l=1, r=INT_MAX, ans=0,mid;
        while(l<=r)
        {
            mid=(l+r)/2;
            ll x= mid-(mid/n);
            if(x==k)
            {
                ans=mid;
                r=mid-1;
            }
            else if(x<k)
            {
                l=mid+1;
            }
            else
            {
                r=mid-1;
            }
        }
        cout<<ans<<endl;
    }
    
    return 0;
}