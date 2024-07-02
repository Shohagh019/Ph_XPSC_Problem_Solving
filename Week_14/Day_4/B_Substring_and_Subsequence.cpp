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
        string a,b;
        cin>>a>>b;
        int ans=0;
        for(int i=0; i<b.length(); i++)
        {
            int cur=i;
            int cnt=0;
            for(int j=0; j<a.length(); j++)
            {
                if(a[j]==b[cur])
                {
                    cur++;
                    cnt++;
                }
            }
            ans= max(ans,cnt);
        }
        cout<<a.size()+(b.size()-ans)<<endl;
    }
    return 0;
}