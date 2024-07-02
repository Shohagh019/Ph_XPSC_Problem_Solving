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
        vector<int> b(n);
        for(int i=0; i<n; i++) cin>>a[i];
        for(int i=0; i<n; i++) cin>>b[i];
        int sum_a=0, sum_b=0, plus=0,minus=0;
        for(int i=0; i<n; i++)
        {
            if(a[i]>b[i]) sum_a+=a[i];

            else if(a[i]<b[i]) sum_b+=b[i];
            else
            {
                if(a[i]==1) plus++;
                else if(a[i]==-1) minus++;
            }
        }
        while(minus>0)
        {
            sum_a>sum_b? sum_a--:sum_b--;
            minus--;
        } 
        while(plus>0)
        {
            sum_a<sum_b? sum_a++:sum_b++;
            plus--;
        } 
        cout<<min(sum_a,sum_b)<<endl;
    }
    return 0;
}