#include<bits/stdc++.h>
#define ll long long
#define edl '\n'
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n,a,b;
    cin>>n>>a>>b;
    int l=1, r=min(a,b),ans=1;
    while(l<=r)
    {
        int mid=(l+r)/2;
        if(a/mid+b/mid>=n)
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