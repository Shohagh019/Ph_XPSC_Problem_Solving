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
        int n,k;
        cin >> n>>k;
        vector<int> a(n);
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int result=-1;
        for(int i = 0; i < n; i++)
        {
            if((a[i]& k)==k)
            {
                result&=a[i];
            }
        }
        if(result==k) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}