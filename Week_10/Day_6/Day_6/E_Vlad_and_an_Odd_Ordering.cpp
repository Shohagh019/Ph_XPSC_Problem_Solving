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
        ll n,k;
        cin>>n>>k;
        ll f=(n+1)/2, bit=0, cur=f;
        while(k>f && f>0)
        {
            k-=f;
            f=(n-cur+1)/2;
            cur+=f;
            bit++;
        }
        ll result= (1<<bit)+(k-1)*(1<<(bit+1));
        cout<<result<<endl;
    }
    return 0;
}