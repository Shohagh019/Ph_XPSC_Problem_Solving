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
        int n,m,x;
        cin>>n>>m>>x;
        vector<int> mv(m);
        vector<char> dir(m);
        for(int i=0; i<m; i++)
        {
            cin>>mv[i]>>dir[i];
        }
        set<ll> ans;
        ans.insert(x);
        set<ll> res;
        for(int i=0; i<m; i++)
        {
            if(dir[i]=='0')
            {
                set<ll> tmp;
                for(auto it:ans)
                {
                    ll a=it+mv[i];
                    if(a>n) a-=n;
                    tmp.insert(a);
                    if(i==m-1)
                    {
                        res.insert(a);
                    }
                }
                ans=tmp;
            }
            else if(dir[i]=='1')
            {
                set<ll> tmp;
                for(auto it:ans)
                {
                    ll a=it+n-mv[i];
                    if(a>n) a-=n;
                    tmp.insert(a);
                    if(i==m-1)
                    {
                        res.insert(a);
                    }
                }
                ans=tmp;
            }
            else
            {
                set<ll> tmp;
                for(auto it:ans)
                {
                    
                    ll a=it+mv[i];
                    if(a>n) a-=n;
                    tmp.insert(a);
                    if(i==m-1)
                    {
                        res.insert(a);
                    }
                    a=it+n-mv[i];
                    if(a>n) a-=n;
                    tmp.insert(a);
                    if(i==m-1)
                    {
                        res.insert(a);
                    }
                }
                ans=tmp;
            }
        }
        cout<<res.size()<<endl;
        for(auto it: res)
        {
            cout<<it<<" ";
        }
        cout<<endl;

    }
    return 0;
}