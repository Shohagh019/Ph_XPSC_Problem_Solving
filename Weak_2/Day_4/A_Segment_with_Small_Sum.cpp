#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,s;
    cin >> n >> s;
    vector<ll> a(n+1);
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }
    ll sum=0;
    ll mx_count=0;
    ll i=0,j=0;
    
    while(j<n)
    {
        sum+=a[j];
        if(sum<=s)
        { 
            mx_count= max(mx_count,j-i+1);
            j++;
        }
        else
        {
            sum-=a[i];
            i++;
            j++;
        }  
    }
    cout<<mx_count<<endl;
    return 0;
}