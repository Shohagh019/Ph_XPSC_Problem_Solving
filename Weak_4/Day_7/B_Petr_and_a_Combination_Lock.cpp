#include<bits/stdc++.h>
#define ll long long
#define edl '\n'
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    bool flag=0;
    for(int i=0; i<(1<<n); i++)
    {
        int sum = 0;
        for(int bits=0; bits<n; bits++)
        {
            if(i&(1<<bits))
            {
                sum+=a[bits];
            }
            else
            {
                sum-=a[bits];
            }
        }
        if(sum%360==0)
        {
            flag=1;
            break;
        }
    }
    if(flag==1) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}