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
        vector<ll> v;
        ll mul=1;
        for(ll i=1; i<=62; i++)
        {
            v.push_back(mul);
            mul*=2;
        }
        string s,x;
        x=to_string(n);
        ll mn=INT_MAX;
        for(ll j=0; j<v.size(); j++)
        {
            s=to_string(v[j]);
            ll idx=0, cnt=0;
            for(ll k=0; k<x.size(); k++)
            {
                if(x[k]==s[idx])
                {
                    idx++;
                }
            }
            ll ans= (x.size()-idx)+ (s.size()-idx);
            mn=min(mn,ans);
        }
        cout<<mn<<endl;
    }
    return 0;
}