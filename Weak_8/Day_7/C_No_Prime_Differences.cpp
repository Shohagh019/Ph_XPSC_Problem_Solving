#include<bits/stdc++.h>
#define ll long long
#define edl '\n'
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        vector<vector<int>> a(n+1,vector<int>(m+1));
        int val=1;
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                a[i][j]=val;
                val++;
            }
        }
        for(int i=1; i<n; i+=2)
        {
            for(int j=0; j<m; j++)
            {
                cout<<a[i][j]<<" ";
            }
            cout<<endl;
        }
        for(int i=0; i<n; i+=2)
        {
            for(int j=0; j<m; j++)
            {
                cout<<a[i][j]<<" ";
            }
            cout<<endl;
        }
        cout<<endl;
    }
    return 0;
}