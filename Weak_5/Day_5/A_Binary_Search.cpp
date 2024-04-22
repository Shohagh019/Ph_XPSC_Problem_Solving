#include<bits/stdc++.h>
#define ll long long
#define edl '\n'
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,k;
    cin >> n >> k;
    vector<ll> a(n);
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    while(k--)
    {
        ll x;
        cin >> x;
        ll l=0; ll r=n-1;
        bool flag = false;
        while(l<=r)
        {
            ll mid=(l+r)/2;
            if(a[mid]==x)
            {
                flag = true;
                break;
            }
            else if(a[mid]<x)
            {
                l=mid+1;
            }
            else 
            {
                r=mid-1;
            }
        }
        if(flag) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    }
    return 0;
}