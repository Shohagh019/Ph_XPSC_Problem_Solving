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
        int n;
        cin>>n;
        vector<int> a(n);
        ll mn;
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            if(i==0)
            {
                mn=a[i];
            }
            else
            {
                mn=mn&a[i];
            }
        }
        cout<<mn<<endl;
    }
    return 0;
}