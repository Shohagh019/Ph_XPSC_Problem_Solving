#include<bits/stdc++.h>
#define ll long long
#define edl '\n'
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin>>s;
    map<char,int> mp;
    for(auto i:s)
    {
        mp[i]++;
    }
    int cnt = 0;
    for(auto i:mp)
    {
        if(i.second%2)
        {
            cnt++;
            if(cnt>1)
            {
                cout<<"NO SOLUTION"<<endl;
                return 0;
            }
        }
    }
    string ans="";
    char x='#';
    for(auto it:mp)
    {
        
        for(int i=0; i<it.second/2; i++)
        ans+=it.first;
        if(it.second%2) x=it.first;
    }
    cout<<ans;
    if(x!='#') cout<<x;
    reverse(ans.begin(),ans.end());
    cout<<ans<<endl;
    return 0;
}