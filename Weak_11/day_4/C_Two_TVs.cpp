#include <bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    map<int,int> mp;
    while(n--)
    {
        int l,r;
        cin>>l>>r;
        mp[l]++;
        mp[r+1]--;
    }
    ll sum=0;
    bool flag=true;
    for(auto it:mp)
    {
        sum+=it.second;
        if(sum>2)
        {
            flag=false;
            break;
        }
    }
    flag? cout<<"YES"<<endl: cout<<"NO"<<endl;
    return 0;
}