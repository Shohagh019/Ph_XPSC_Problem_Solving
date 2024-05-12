#include<bits/stdc++.h>
#define ll long long
#define edl '\n'
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll x;
    cin >> x;
    ll a,b;
    for(int i=1;i*i<=x; i++)
    {
        if(x%i) continue;
        ll p=i, q=x/i;
        if(__gcd(p,q)==1)
        {
           a=p;
           b=q;
        }  
    }
    cout<<a<<" "<<b<<endl;
    return 0;
}