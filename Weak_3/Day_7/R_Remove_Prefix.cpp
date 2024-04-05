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
        set<int> s;
        int uniq_cnt = 0;
        for(int i=n-1; i>=0; i--)
        {
            s.insert(a[i]);
            uniq_cnt++;
            if(s.size() < uniq_cnt)
            {
                break;
            }
        }
        int result=n-s.size();
        cout<<result<<edl;
    }
    return 0;
}