#include<bits/stdc++.h>
using namespace std;
int mx[202][202];
int find_ans(int n,int m, int i, int j)
{
    int ans=0;
    int idx=0;
    while(i-idx>-1 && j-idx>-1)
    {
        ans+=mx[i-idx][j-idx];
        idx++;
    }
    idx=0;
    while(i-idx>-1 && j+idx<m)
    {
        ans+=mx[i-idx][j+idx];
        idx++;
    }
    idx=0;
    while(i+idx<n && j-idx>-1)
    {
        ans+=mx[i+idx][j-idx];
        idx++;
    }
    idx=0;
    while(i+idx<n && j+idx<m)
    {
        ans+=mx[i+idx][j+idx];
        idx++;
    }
    return ans-3*mx[i][j];
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>mx[i][j];
            }
        }
        int mx = 0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                mx=max(mx,(find_ans(n,m,i,j)));
            }
        }
        cout<<mx<<endl; 
    }
    return 0;
}

