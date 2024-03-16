#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll x,y;
    cin>>x>>y;
    int count=0;
    while(x<=y)
    {
        x=x*2;
        count++;
    }
    cout<<count<<endl;
    return 0;
}