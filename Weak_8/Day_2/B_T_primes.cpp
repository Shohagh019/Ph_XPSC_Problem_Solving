#include <bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;
bool isPrime(ll n)
{
    if(n==1) return false;
    for(ll i=2; i*i<=n; i++)
    {
        if(n%i==0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        ll x;
        cin>>x;
        ll y=sqrtl(x);
        if(isPrime(y)  && (y*y)==x)
        {
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
    }
    return 0;
}