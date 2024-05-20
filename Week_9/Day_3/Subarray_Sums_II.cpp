#include <bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,x;
    cin>>n>>x;
    map<ll,int> mp;
    ll sum=0, cnt=0;
    mp[sum]=1;
    for(ll i=0; i<n; i++)
    {
        ll e;
        cin>>e;
        sum+=e;
        cnt+= mp[sum-x];
        mp[sum]++;
    }
    cout<<cnt<<endl;
    return 0;
}