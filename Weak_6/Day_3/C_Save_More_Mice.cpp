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
        cin>>n>>k;
        multiset<int> mt;
        for(int i=0; i<k; i++)
        {
            int x;
            cin>>x;
            mt.insert(-x);
        }
        int total = 0;
        int cnt = 0;
        for(auto val:mt)
        {            
            total+=(n-((-1)*val));
            if(total<n) cnt++;
            else break;
        }
        cout<<cnt<<endl;
        mt.clear();
    }
    return 0;
}