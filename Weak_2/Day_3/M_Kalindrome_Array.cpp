#include <bits/stdc++.h>
using namespace std;
int find_kal(vector<int> &v)
{
    int result=1;
    int i=0, j=v.size()-1;
    while(i<j)
    {
        if(v[i]!=v[j])
        {
            result=0;
            break;
        }
        i++;
        j--;
    }
    return result;
}
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
        vector<int> a(n+1);
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        int ans = -1;
        int i=0; int j=n-1;
        int x,y;
        while(i<j)
        {
            if(a[i]!=a[j])
            {
                ans=1;
                x=a[i];
                y=a[j];
                break;
            }
            i++;
            j--;
        }
        if(ans==-1) cout<<"YES"<<endl;
        else
        {
            vector<int> v1,v2;
            for(int i=0; i<n; i++)
            {
                if(a[i]==x) continue;
                v1.push_back(a[i]);
            }
            for(int i=0; i<n; i++)
            {
                if(a[i]==y) continue;
                v2.push_back(a[i]);
            }
            int ans1= find_kal(v1);
            int ans2= find_kal(v2);
            if(ans1==1 || ans2==1) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    }
    return 0;
}