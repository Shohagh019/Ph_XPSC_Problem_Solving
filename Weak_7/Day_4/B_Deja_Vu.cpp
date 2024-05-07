#include <bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,q;
        cin>>n>>q;
        vector<ll> a(n);
        vector<ll> x;
        for(ll i=0; i<n; i++)
        {
            cin>>a[i];
        }
        for(ll i=0; i<q; i++)
        {
            int y;
            cin>>y;
            if(x.empty() || x.back()>y)
            {
                x.push_back(y);
            }
        }
        for(ll i=0; i<n; i++)
        {
            for(auto it:x)
            {
                if(a[i]%(1<<it)==0)
                {
                    it--;
                    a[i]+=(1<<it);
                }
            }
        }
        for(auto it: a)
        {
            cout<<it<<" ";
        }
        cout<<endl;
    }
    return 0;
}