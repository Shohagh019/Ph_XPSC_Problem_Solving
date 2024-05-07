#include<bits/stdc++.h>
#define ll long long
#define edl '\n'
using namespace std;
ll cnt_inv(ll n,vector<ll> a)
{
    ll cnt = 0;
    ll one=0;
    for(int i = 0; i < n; i++)
    { 
        if(a[i]==1)
        {
            one++;
        }
        else
        {
            cnt += one;
        }
    }
    return cnt;
}
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
        ll ans= cnt_inv(n,a);
        int track=-1;
        for(int i = 0; i < n; i++)
        {
            if(a[i]==0)
            {
                a[i]=1;
                track=i;
                break;
            }
        }
        ans= max(ans, cnt_inv(n,a));
        if(track!=-1)
        {
            a[track]=0;
        }
        for(int i=n-1; i>=0; i--)
        {
            if(a[i]==1)
            {
                a[i]=0;
                break;
            }
        }
        ans= max(ans, cnt_inv(n,a));
        cout<<ans<<endl;
    }
    return 0;
}