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
        ll x,y,k;
        cin>>x>>y>>k;
        while(k>0 && x>1)
        {
            ll rm= y-(x%y);
            if(rm>=k)
            {
                x+=k;
                k=0;
            }
            else
            {
                x+=rm;
                k-=rm;
            }
            while(x%y==0)
            {
                x/=y;
            }
        }
        if(k>0)
        {
            k%=y-1;
            x+=k;
        }
        cout<<x<<endl;
    }
    return 0;
}