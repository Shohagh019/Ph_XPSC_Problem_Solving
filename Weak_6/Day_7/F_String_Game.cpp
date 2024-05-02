#include<bits/stdc++.h>
#define ll long long
#define edl '\n'
using namespace std;
bool sub(string a, string b)
{
    int j = 0;
    bool found = false;
    for(int i=0; i<a.size(); i++)
    {
        if(a[i] == b[j])
        {
            j++;
        }
        if(j==b.size())
        {
            found = true;
            break;
        }

    }
        return found;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    string t,p;
    cin>>t;
    cin>>p;
    int n=t.size(), m=p.size();
    vector<int> a(n+1);
    for(int i=0;i<t.size();i++)
    {
        cin>>a[i];
    }
    auto solve = [&](int mid)
    {
        string tmp=t;
        for(int i=0; i<mid; i++)
        {
            tmp[a[i]-1] ='#';
        }
        return sub(tmp,p);
    };
    int l=0,r=n,ans=0,mid;
    while(l<=r)
    {
        mid=(l+r)/2;
        if(solve(mid))
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
    return 0;
}