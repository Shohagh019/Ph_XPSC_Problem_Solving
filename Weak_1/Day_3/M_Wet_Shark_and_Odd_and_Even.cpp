#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin >> n;
    ll a[n];
    ll sum = 0;
    ll  min_odd=INT_MAX;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
        if(a[i]%2!=0)
        {
            min_odd=min(min_odd,a[i]);
        }
    }
    if(sum%2==0) cout<<sum<<'\n';
    else{
        cout<<sum-min_odd<<'\n';
    }
    return 0;
}