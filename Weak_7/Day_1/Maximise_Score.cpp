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
        int n;
        cin >> n;
        vector<int> a(n);
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        vector<int> dif;
        for(int i = 0; i < n; i++)
        {
            int l=-1,r=-1;
            if(i-1>=0) l= abs(a[i]-a[i-1]);
            if(i+1<n) r= abs(a[i]-a[i+1]);
            dif.push_back(max(l,r));
        }
        int ans=INT_MAX;
        for(int v:dif)
        {
            ans= min(ans,v);
        }
        cout<<ans<<endl;
    }
    return 0;
}