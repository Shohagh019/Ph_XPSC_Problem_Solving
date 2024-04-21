#include<bits/stdc++.h>
#define ll long long
#define edl '\n'
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)
    {
        ll n;
        cin >> n;
        ll m=(n*(n-1)/2);
        vector<ll> b(m);
        for(int i=0; i<m; i++)
        {
            cin>>b[i];
        }
        sort(b.begin(), b.end());
        for(int i=0; i<m; i+=--n)
        {
            cout<<b[i]<<" ";
        }
        cout<<b[m-1]<<endl;
    }
    return 0;
}