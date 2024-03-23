#include<bits/stdc++.h>
using namespace std;
int fun (string s, string k)
{
    int result=0;
    for(int i = 0; i <s.size(); i++)
    {
        result += abs(s[i]-k[i]);
    }
    return result;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)
    {
        int m, n;
        cin>>m>>n;
        vector<string> st(m);
        for(int i=0; i<m; i++)
        {
            cin >> st[i];
        }
        int ans = INT_MAX;
        for(int i=0; i<m-1; i++)
        {
            for(int j=i+1; j<m; j++)
            {
                ans=min(ans,fun(st[i], st[j]));
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}