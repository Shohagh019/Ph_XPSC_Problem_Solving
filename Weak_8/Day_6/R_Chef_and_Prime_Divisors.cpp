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
        ll a,b;
        cin>>a>>b;
        while(__gcd(a,b)>1)
        {
            b/=__gcd(a,b);
        }
        if(b<=1) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
    return 0;
}