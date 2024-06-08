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
        int n;
        cin>>n;
        vector<ll> a(n);
        ll p_sum = 0;
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            if(a[i]>=0)
            {
                p_sum += a[i];
            }
        }
        ll add=0;
        for(int i=0; i<n; i++)
        {
            if(i%2==0)
            {
                if(a[i]>0)
                {
                    add=max(add,p_sum);
                    p_sum-=a[i];
                }
                else
                {
                    add=max(add,p_sum+a[i]);
                }
            }
            else
            {
                if(a[i]>0)
                {
                    p_sum-=a[i];
                    add=max(add,p_sum);
                }
                else
                {
                    add=max(add,p_sum);
                }
            }
        }
        cout<<add<<endl;
    }
    return 0;
}