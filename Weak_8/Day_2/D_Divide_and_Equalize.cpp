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
        vector<int> a(n);
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        map<int,int> mp;
        for(int i=0;i<n; i++)
        {
            for(int j=2; j*j<=a[i]; j++)
            {
                if(a[i]%j==0)
                {
                    while(a[i]%j==0)
                    {
                        mp[j]++;
                        a[i]=a[i]/j;
                    }
                }
            }
            if(a[i]>1) mp[a[i]]++;
        }
        set<int> st;
        bool flag=true;
        for(auto it:mp)
        {
            if(it.second%a.size()!=0) flag=false;
            
        }
        if(flag) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}