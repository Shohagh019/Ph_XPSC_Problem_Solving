#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    bool flag= true;
    for(int i=a; i<=b; i++)
    {
        if(i%c==0)
        {
            cout<<i<<endl;
            flag=false;
            break;
        }
    }
    if(flag) cout<<-1<<endl;
    return 0;
}