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
        ll n;
        cin >> n;
        ll result=0;
        while(n>=1)
        {
            result=result+n;
            n=n/2;
        }
        cout<<result<<edl;
    }
    return 0;
}