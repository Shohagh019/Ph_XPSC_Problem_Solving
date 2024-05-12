#include<bits/stdc++.h>
#define ll long long
#define edl '\n'
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll l,r;
    cin>>l>>r;
    cout<<"YES"<<endl;
    for(ll i=l; i<r+1; i+=2)
    {
        cout<<i<<" "<<i+1<<endl;
    }
    return 0;
}