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
        int n;
        cin>>n;
        ll x=log2(n-1);
        x=pow(2,x);
        for(int i=n-1; i>=x; i--)
        {
            cout<<i<<" ";
        }
        for(int i=0; i<x; i++)
        {
            cout<<i<<" ";
        }
        cout<<endl;
    }
    return 0;
}