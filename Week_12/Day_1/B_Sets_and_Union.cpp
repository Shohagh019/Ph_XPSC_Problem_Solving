#include<bits/stdc++.h>
#define ll long long
#define edl '\n'
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
        vector<int> a[n];
        set<int> st;
        for(int i=0; i<n; i++)
        {
            int k;
            cin>>k;
            a[i].resize(k);
            for(int j=0; j<a[i].size(); j++)
            {
                cin>>a[i][j];
                st.insert(a[i][j]);
            } 
            
        }
        int ans=0;
        for(int ex=1; ex<=50; ex++)
        {
            set<int> tmp;
            for(int i=0; i<n; i++)
            {
                bool found = false;
                for(int j=0; j<a[i].size(); j++)
                {
                    if(a[i][j]==ex)
                    {
                        found = true;
                        break;
                    }
                }
                if(!found)
                {
                    for(int j=0; j<a[i].size(); j++)
                    {
                        tmp.insert(a[i][j]);
                    }
                }
            }
            if(tmp!=st)
            {
                ans=max(ans, (int)tmp.size());
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}