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
        vector<int> a(n),b(n);
        for(int i=0; i<n; i++) cin>>a[i];
        for(int i=0; i<n; i++) cin>>b[i];
        vector<int> dif;
        for(int i=0;i<n; i++)
        {
            dif.push_back(b[i]-a[i]);
        }
        sort(dif.rbegin(),dif.rend());
        int cnt=0;
        for(int i=0,j=dif.size()-1; i<j;)
        {
            if(dif[i]+dif[j]>=0)
            {
                cnt++;
                i++,j--;
            }
            else
            {
                j--;
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}