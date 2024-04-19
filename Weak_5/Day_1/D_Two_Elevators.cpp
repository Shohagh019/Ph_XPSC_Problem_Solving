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
        int a,b,c;
        cin>>a>>b>>c;
        int x = abs(b-c)+ abs(c-1);
        if(abs(a-1)<x) cout<<1<<endl;
        else if(abs(a-1)>x) cout<<2<<endl;
        else cout<<3<<endl;
    }
    return 0;
}