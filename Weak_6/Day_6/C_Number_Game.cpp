#include<bits/stdc++.h>
#define ll long long
#define edl '\n'
using namespace std;
bool solve(int k,vector<int> a)
{
    multiset<int> mt;
    for(int v:a)
    {
        mt.insert(v);
    }
    for(int i=1; i<=k; i++)
    {
        if(mt.empty()) return false;
        int req=k-i+1;
        auto it = mt.upper_bound(req);
        if(it==mt.begin()) return false;
        it--;
        mt.erase(it);
        if(!mt.empty())
        {
            it = mt.begin();
            int v= *it+req;
            mt.erase(it);
            mt.insert(v);
        }

    }
    return true;
}
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
        vector<int> a(n);
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        int l=1, r= n, ans=0,mid;
        while(l<=r)
        {
            mid=(l+r)/2;
            if(solve(mid,a))
            {
                ans=mid;
                l=mid+1;
            }
            else
            {
                r=mid-1;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}