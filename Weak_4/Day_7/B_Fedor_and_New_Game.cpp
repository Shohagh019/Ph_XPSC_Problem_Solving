#include<bits/stdc++.h>
#define ll long long
#define edl '\n'
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m,k;
    cin >> n >> m >> k;
    vector<int> a(m+1);
    for(int i=0; i<=m; i++)
    {
        cin >> a[i];
    }
    vector<vector<int>> mask;
    for(int i=0; i<=m; i++)
    {
        vector<int> v;
        for(int j=0; j<n; j++)
        {
            if((a[i]>>j)&1)
            {
                v.push_back(1);
            }
            else
            {
                v.push_back(0);
            }
        }
        mask.push_back(v);
    }
    int ans=0;
    vector<int> fedor=mask[m];
    for(int i=0; i<mask.size()-1;i++)
    {
        vector<int> v=mask[i];
        int cnt=0;
        for(int j=0; j<n; j++)
        {
            if(fedor[j]!=v[j])
            {
                cnt++;
            }
        }
        if(cnt<=k)
        {
            ans++;
        }
    }
    cout<<ans<<endl;
    return 0;
}