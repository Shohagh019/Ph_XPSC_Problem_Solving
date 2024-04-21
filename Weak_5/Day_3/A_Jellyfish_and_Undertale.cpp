#include<bits/stdc++.h>
#define ll long long
#define edl '\n'
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)
    {
        int a,b,n;
        cin >> a >> b >> n;
        vector<int> v(n);
        ll sum = 0;
        if(b>=a)
        {
            sum=a;
            b=a;
        }
        else
        {
            sum=b;
        }
        for(int i = 0; i < n; i++)
        {
            cin>>v[i];
            if(v[i]+1<=a) sum+=v[i];
            else sum+=a-1;
        }
        cout<<sum<<endl;
    }
    return 0;
}