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
        for(int i=n; i>=1; i--)
        {
            cout<<i<<" ";
        }
        cout<<endl;
    }
    return 0;
}