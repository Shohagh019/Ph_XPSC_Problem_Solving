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
        ll n,k,q;
        cin>>n>>k>>q;
        vector<ll> a(k+1);
        vector<ll> b(k+1);
        a[0]=0;
        b[0]=0;
        for(int i=1; i<=k; i++)
        {
            cin>>a[i];
        }
        for(int i=1; i<=k; i++)
        {
            cin>>b[i];
        }
        // vector<double> sp(k+1);
        // for(int i=1; i<=k; i++)
        // {
        //     double dis= a[i]-a[i-1];
        //     double tm= b[i]-b[i-1];
        //     sp[i]=dis/tm;
        // }
        while(q--)
        {
            ll d;
            cin>>d;
            if(d==0)
            {
                cout<<0<<" ";
                continue;
            }
            if(d==n)
            {
                cout<<b[k]<<" ";
                continue;
            }
            ll it = upper_bound(a.begin(), a.end(),d)-a.begin();
            ll ans = b[it-1];
            ll dst= a[it]-a[it-1];
            ll time=b[it]-b[it-1];
            ll x_dis=d-a[it-1];
            ll x_time= (x_dis*time)/dst;
            ans+=x_time;
            cout<<ans<<" ";
        }
        cout<<endl;
    }
    return 0;
}

