#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n,k;
    cin>>n>>k;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    int i=0;  
    int mx=INT_MIN;
    while(i<=n-k)
    {
        int j=i+k;
        int sum = 0;
        for(int s=i; s<j; s++)
        {
            sum += a[s];
        }
        mx=max(mx,sum);
        i++;
    }
    cout<<mx<<endl;
    return 0;
}