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
        int n,k;
        cin>>n>>k;
        vector<ll> a(n);
        ll sum=0;
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            sum+=a[i]/k;
            a[i]=a[i]%k;
        }
        sort(a.begin(), a.end(), greater<ll>());
        for(int i=0, j=n-1; i<j; i++, j--)
        {
            while(a[i]+a[j]<k && i<j) j--;
            if(i==j) break;
            sum++;

        }
        cout<<sum<<endl;
    }
    return 0;
}