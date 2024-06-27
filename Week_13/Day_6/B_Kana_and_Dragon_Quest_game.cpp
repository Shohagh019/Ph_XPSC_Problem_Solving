#include <bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int x,n,m;
        cin>>x>>n>>m;
        int result=x;
        if(x>20)
        {
                    for(int i=0; i<n; i++)
        {
            result= (result/2)+10;
        }
        }

        result-= 10*m;
        if(result<=0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}