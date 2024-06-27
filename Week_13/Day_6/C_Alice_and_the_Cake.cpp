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
        ll n;
        cin>>n;
        vector<ll> a(n);
        ll sum=0;
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            sum+=a[i];
        }
        multiset<ll> init={sum};
        multiset<ll> mt(a.begin(),a.end());
        while(!init.empty())
        {
            ll x= *--init.end();
            if(x<*--mt.end()) break;
            init.erase(--init.end());
            if(mt.find(x)!=mt.end())
            {
                mt.erase(mt.find(x));
            }
            else
            {
                init.insert(x/2);
                init.insert((x+1)/2);
            }
        }
        cout<<(mt.empty()? "YES":"NO")<<endl;
    }
    return 0;
}