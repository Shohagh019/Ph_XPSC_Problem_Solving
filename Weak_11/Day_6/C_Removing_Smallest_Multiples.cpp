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
        int n;
        cin>>n;
        string s;
        cin>>s;
        s='#'+s;
        vector<int> vst(n+1,0);
        for(int i=1; i<=n; i++)
        {
            if(s[i]=='1') vst[i]=2;
        }
        ll ans=0;
        for(int i=1; i<=n; i++)
        {
            for(int j=i; j<=n; j=j+i)
            {
                if(vst[j]==0)
                {
                    vst[j]=1;
                    ans+=i;
                }
                else if(vst[j]==2) break;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}