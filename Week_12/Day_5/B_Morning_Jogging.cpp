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
        int n,m;
        cin>>n>>m;
        vector<int> a[n+3];
        vector<int> ans[n+3];
        for(int i=0; i<n; i++)
        {
            for(int j=0;j<m; j++)
            {
                int x;
                cin>>x;
                a[i].push_back(x);
            }
        }
        for(int i=0; i<n; i++)
        {
            sort(a[i].begin(),a[i].end());
        }
        for(int i=0; i<m; i++)
        {
            int mn=INT_MAX;
            int ind=-1;
            for(int j=0; j<n; j++)
            {
                if(a[j][0]<mn)
                {
                    mn=a[j][0];
                    ind=j;
                }
            }
            for(int j=0; j<n; j++)
            {
                if(j==ind)
                {
                    ans[j].push_back(a[j][0]);
                    a[j].erase(a[j].begin());
                }
                else
                {
                    ans[j].push_back(a[j][a[j].size()-1]);
                    a[j].pop_back();

                }
            }
        }
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<ans[i].size(); j++)
            {
                cout<<ans[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}