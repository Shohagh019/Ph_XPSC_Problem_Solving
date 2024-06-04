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
        int x,y;
        cin>>x>>y;
        mp[x]++;
        mp[y+1]--;
    }
    int mx=0;
    int sum=0;
    for(auto it: mp)
    {
        sum+=it.second;
        mx=max(mx,sum);
    }
    cout<<mx<<endl;
    return 0;
}