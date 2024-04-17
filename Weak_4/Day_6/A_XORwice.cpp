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
        int a,b;
        cin>>a>>b;
        // x = a/b;
        // a^a+ b^a
        cout<<(b^a)<<edl;
    }
    return 0;
}