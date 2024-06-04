#include <bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;
const int N=200005;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n,k,q;
    cin>>n>>k>>q;
    vector<int> d(N);
    while(n--)
    {
        int l,r;
        cin>>l>>r;
        d[l]++;
        d[r+1]--;
    }
    for(int i=1; i<=N; i++)
    {
        d[i]+=d[i-1];
    }
    for(int i=1; i<=N; i++)
    {
        d[i]= d[i-1]+(d[i]>=k? 1:0);
    }
    while(q--)
    {
        int x,y;
        cin>>x>>y;
        cout<<d[y]-d[x-1]<<endl;
    }
   
    return 0;
}