#include<bits/stdc++.h>
#define ll long long
#define edl '\n'
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n,l,r,x;
    cin>>n>>l>>r>>x;
    vector<int> a(n);
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    int ans = 0;
    for(int i=0; i<(1<<n); i++)
    {
        int mn=INT_MAX, mx=INT_MIN, cnt=0, sum=0;
        for(int bt=0; bt<n; bt++)
        {
            if(i&(1<<bt))
            {
                cnt++;
                sum+=a[bt];
                mn=min(mn,a[bt]);
                mx=max(mx,a[bt]);
            }
        }
        if((mx-mn)>=x&& sum>=l && sum<=r && cnt>=2) ans++;
    }
    cout<<ans<<endl;
    return 0;
}