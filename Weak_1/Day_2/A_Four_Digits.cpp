#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    string s= to_string(n);
    
    for(int i=1; i<=4-s.size(); i++)
    {
        cout<<'0';
    }
    cout<<s<<endl;
    return 0;
}