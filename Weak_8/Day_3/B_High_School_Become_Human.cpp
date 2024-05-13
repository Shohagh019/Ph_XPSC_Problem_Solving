#include <bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll a,b;
    cin>>a>>b;
    if(a==b)
    {
        cout<<"="<<endl;
        return 0;
    }
    double x,y;
    x= a*log(b);
    y= b*log(a);
    if(x>y) cout<<"<"<<endl;
    else if(x<y) cout<<">"<<endl;
    else cout<<"="<<endl;
    return 0;
}
