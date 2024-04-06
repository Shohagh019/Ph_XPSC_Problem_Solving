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
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int XOR_sum=0;
        for(int i = 0; i < n; i++)
        {
            XOR_sum^=a[i];
        }
        if(n&1!=0)
        {
            cout<<XOR_sum<<edl;
        }
        else
        {
            if(XOR_sum==0) cout<<0<<edl;
            else cout<<-1<<edl;
        }
    }
    return 0;
}