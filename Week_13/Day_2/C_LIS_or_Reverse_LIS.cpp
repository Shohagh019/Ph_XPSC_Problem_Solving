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
        map<int,int> mp;
        for(int i=0; i<n; i++)
        {
            int x;
            cin>>x;
            mp[x]++;
        }
        int dbl=0;
        int snl=0;
        for(auto it: mp)
        {
            dbl+= it.second>1;
            snl+= it.second==1;
        }
        int ans=dbl+(snl+1)/2;
        cout<<ans<<endl;
    }
    return 0;
}