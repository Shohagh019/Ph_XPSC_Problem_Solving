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
        ll n,q;
        cin>>n>>q;
        vector<ll> a(n);
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        sort(a.begin(),a.end(),greater<int>());
        vector<ll> fq(n);
        fq[0]=a[0];
        for(int i=1; i<n; i++)
        {
            fq[i]=fq[i-1]+a[i];
        }
        while(q--)
        {
            ll x;
            cin>>x;
            if(x>fq[n-1])
            {
                cout<<-1;
            }
            else
            {
                auto it= lower_bound(fq.begin(),fq.end(),x)-fq.begin();
                cout<<it+1;
            }
            cout<<endl;
        }
    }
    return 0;
}