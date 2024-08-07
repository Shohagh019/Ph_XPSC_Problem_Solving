#include <bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n,q;
    cin>>n>>q;
    vector<int> a(n+1);
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
    }
    sort(a.rbegin(),a.rend());
    vector<int> d(n+2);
    while(q--)
    {
        int l,r;
        cin>>l>>r;
        d[l]++;
        d[r+1]--;
    }
    for(int i=1; i<=n; i++)
    {
        d[i]+=d[i-1];
    }
    sort(d.rbegin(),d.rend());
    ll sum=0;
    for(int i=0; i<n; i++)
    {
        sum+= d[i]*a[i];
    }
    cout<<sum<<endl;
    return 0;
}