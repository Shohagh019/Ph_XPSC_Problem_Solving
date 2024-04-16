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
        int flag =0; 
        int ans = 1;
        if(n==0) return ans;
        for(int i=31; i>=0; i--)
        {
            if(n&(1<<i))
            {
                flag++;
            }
            else if(flag>=2)
            {
                ans*=2;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}