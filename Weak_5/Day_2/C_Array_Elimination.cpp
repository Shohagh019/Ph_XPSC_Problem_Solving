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
        int n;
        cin >> n;
        vector<int> a(n);
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        vector<int> fq(31,0);
        for(int i=0; i<31; i++)
        {
            for(int j=0; j<n; j++)
            {
                if(a[j]&(1<<i))
                {
                    fq[i]++;
                }
            }
        }
        for(int k=1; k<=n; k++)
        {
            bool flag =0;
            for(int i=0; i<31; i++)
            {
                if(fq[i]%k!=0)
                {
                    flag=1;
                    break;
                }
            }
            if(flag==0) cout<<k<<" ";
        }
        cout<<endl;
    }
    return 0;
}