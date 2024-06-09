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
        int n,k;
        cin>>n>>k;
        vector<pair<int,int>> v;
        for(int i=1; i<=n; i++)
        {
            int x;
            cin>>x;
            v.push_back({x,i});
        }
        sort(v.begin(),v.end());
        int mx[n+3];
        int mn[n+3];
        int maxx=INT_MIN;
        int minn=INT_MAX;
        for(int i=v.size()-1; i>=0; i--)
        {
            maxx=max(maxx,v[i].second);
            mx[i]=maxx;
            minn=min(minn,v[i].second);
            mn[i]=minn;
        }
        map<int,int> mp;
        for(int i=0; i<v.size(); i++)
        {
            int x=mx[i]-mn[i]+1;
            int val=v[i].first;
            mp[val]=max(mp[val],x*2);
        }
        for(int i=1; i<=k; i++)
        {
            cout<<mp[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}