
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
        ll n,k,q;
        cin>>n>>k>>q;
        vector<ll> a(n);
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        ll count_days =0;
        for(int i=0; i<n;)
        {
            if(a[i]>q)
            {
                i++;
                continue;
            }
            ll t_count=0;// to count the number less then or equal to q before q
            while(i<n && a[i]<=q)
            {
                i++;
                t_count++;
            }
            if(t_count>=k)
            {
                ll x= t_count-k+1;// to find the number of subarary greater than k.
                count_days+= x*(x+1)/2; // find some of 1 to n numbers.
            }
        }
        cout<<count_days<<endl;
    }
    return 0;
}