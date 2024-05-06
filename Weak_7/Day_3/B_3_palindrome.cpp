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
    for(int i=0; i<n; i++)
    {
        if((i&2)==0)cout<<"a";
        else cout<<"b";
    }
    return 0;
}