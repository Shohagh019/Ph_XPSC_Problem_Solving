#include <bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin>>n;
    vector<ll> a(n);
    for(ll i=0; i<n; i++)
    {
        cin>>a[i];
    }
    ll result=0;
    for(ll i=0; i<n; i++)
    {
        result=max(result,a[i]);
    }
    vector<ll> ans;
    ll sum=0;
    for(ll i=0; i<n; i++)
    {
        if(result-a[i]!=0)
        {
            ans.push_back(result-a[i]);
            sum+=(result-a[i]);
        }
    }
    ll cnt= ans[0];
    for(ll i=1; i<ans.size(); i++)
    {
        cnt=__gcd(cnt,ans[i]);
    }
    ll people= sum/cnt;
    cout<<people<<" "<<cnt<<endl;
    return 0;
}