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
        ll a[n+4];
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        ll gc1=0, gc2=0;
        for(int i=0; i<n; i++)
        {
            if(i%2==0)
            {
                gc1=__gcd(gc1,a[i]);
            }
            else
            {
                gc2=__gcd(gc2,a[i]);
            }
        }
        int x=0,y=0;
        for(int i=1; i<n; i+=2)
        {
            if(a[i]%gc1==0)
            {
                x=1;
                break;
            }
        }
        for(int i=0; i<n; i+=2)
        {
            if(a[i]%gc2==0)
            {
                y=1;
                break;
            }
        }
        if(x==1 && y==1) cout<<0<<endl;
        else if(x==0) cout<<gc1<<endl;
        else cout<<gc2<<endl;
    }
    return 0;
}
