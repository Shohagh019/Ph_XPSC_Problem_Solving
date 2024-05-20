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
    for(int i=0; i<n; i++)
    {
        int e;
        cin>>e;
        sum+=e;
        if(mp[sum-x])
        {
            cnt++;
        }
        mp[sum]=1;
    }
    cout<<cnt<<endl;
    return 0;
}