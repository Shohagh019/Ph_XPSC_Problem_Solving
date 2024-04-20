#include<bits/stdc++.h>
#define ll long long
#define edl '\n'
using namespace std;
int longest_common(string a, string b)
{
    int n=a.size();
    int m=b.size();
    int dp[n+1][m+1];
    for(int i=0; i<=n; i++)
    {
        for(int j=0; j<=m; j++)
        {
            if(i==0 || j==0)
            {
                dp[i][j] = 0;
            }
        }
    }
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=m; j++)
        {
            if(a[i-1]==b[j-1])
            {
                dp[i][j] = dp[i-1][j-1]+1;
            }
            else
            {
                dp[i][j]=0;
            }
        }
    }
    int mx=0;
    for(int i=0; i<=n; i++)
    {
        for(int j=0; j<=m; j++)
        {
            mx=max(mx,dp[i][j]);
        }
    }
    return mx;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)
    {
        string a,b;
        cin >> a >> b;
        int max_length = longest_common(a,b);
        int ans = (a.size()-max_length)+(b.size()-max_length);
        cout << ans << endl;
    }
    return 0;
}