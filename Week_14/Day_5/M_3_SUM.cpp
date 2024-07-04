#include <bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;
void solve()
{
    int n;
    cin>>n;
    map<int,int> mp;
    for(int i=0; i<n; i++)
    {
        ll x;
        cin>>x;
        mp[x%10]++;
    }
    int ans=0;
    for(int i=0; i<10; i++)
    {
        for(int j=0; j<10; j++)
        {
            for(int k=0; k<10; k++)
            {
                int a=-1,b=-1,c=-1;
                if(mp[i]!=0)
                {
                    a=1;
                    mp[i]--;
                }
                if(mp[j]!=0)
                {
                    b=1;
                    mp[j]--;
                }
                if(mp[k]!=0)
                {
                    c=1;
                    mp[k]--;
                }
                if(a==1 && b==1 && c==1)
                {
                    int sum= i+j+k;
                    if(sum%10==3)
                    {
                        ans=1;
                        break;
                    }
                }
                if(a==1)mp[i]++;
                if(b==1)mp[j]++;
                if(c==1)mp[k]++;
            }
        }
    }
    if(ans) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}