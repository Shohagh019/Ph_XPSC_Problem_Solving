#include <bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    map<int,int> mp;
    while(n--)
    {
        int x;
        cin>>x;
        for(int i=2; i*i<=x; i++)
        {
            if(x%i==0)
            {
                mp[i]++;
            }
            while(x%i==0)
            {
                x/=i;
            }
        }
        if(x>1) mp[x]++;
    }
    int ans=1;
    for(auto it=mp.begin(); it!=mp.end(); it++)
    {
        ans=max(ans,(*it).second);
    }
    cout<<ans<<endl;
    return 0;
}