#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int mx[n+5][n+2];
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n - 1; j++)
            {
                cin >> mx[i][j];
            }
        }
        map<int,int> mp;
        for(int i = 1; i <= n; i++)
        {
            mp[mx[i][n-1]]++;
        }
        int target, lst;
        for(auto it:mp)
        {
            if(it.second==1) target = it.first;
            else lst = it.first;
        }
        for(int i=1; i<=n; i++)
        {
            int cur=1;
            if(mx[i][n-1]==target)
            {
                int j=1;
                while(j<n)
                {
                    cout<<mx[i][j]<<" ";
                    j++;
                } 
            }
        }
        cout<<lst<<endl; 
    }
    return 0;
}

