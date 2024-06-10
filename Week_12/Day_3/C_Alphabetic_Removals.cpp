#include <bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    map<int,int> mp;
    for(int i=0; i<n; i++)
    {
        mp[s[i]-'a']++;
    }

    for(int i=0;i<mp.size(); i++)
    {
        if(k<=0) break;
        ll remove= min(mp[i],k);
        mp[i]=mp[i]-remove;
        k=k-remove;
    }
    // for(int i=0; i<mp.size(); i++)
    // {
    //     cout<<i<<"=>"<<mp[i]<<endl;
    // }
    string str="";
    for(int i=n-1; i>=0; i--)
    {
        if(mp[s[i]-'a']!=0)
        {
            str+=s[i];
            mp[s[i]-'a']--;
        }
    }
    reverse(str.begin(),str.end());
    cout<<str<<endl;
    return 0;
}