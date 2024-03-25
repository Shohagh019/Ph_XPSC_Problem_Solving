#include <bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,s;
    cin>>n>>s;
    vector<int> a(n+1);
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    ll sum=0, cnt=0, i=0,j=0;
    while(j<n)
    {
        sum+=a[j];
        if(sum<=s)
        {
            cnt+= j-i+1;
        }
        else
        {
            while(sum> s && i<j)
            {
                sum-=a[i];
                i++;
            }
            if(sum<=s)
            {
                cnt+= j-i+1;
            }
        }
        j++;
    }
    cout<<cnt<<endl;
    return 0;
}