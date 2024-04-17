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
        int n;
        cin >> n;
        int mx=0;
        int mn=INT_MAX;
        for(int i = 0; i < n;i++)
        {
            int x;
            cin >> x;
            mx|=x;
            mn&=x;
        }
        cout<<mx-mn<<endl;
    }
    return 0;
}