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
        if(a<b) swap(a,b);
        if(a>2*b || (a+b)%3) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;

    }
    return 0;
}