#include <bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    if(n<4 && n!=1) cout<<"NO SOLUTION"<<endl;
    else if(n==1) cout<<1<<endl;
    else
    {
        for(int i=0; i<n; i++)
        {
            if(i%2!=0) cout<<i+1<<" ";
        }
        
        for(int i=0; i<n; i++)
        {
            if(i%2==0) cout<<i+1<<" ";
        }

    }
    
    return 0;
}