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
        int sum = 0;
        vector<int> a(n);
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for(int i = 0; i < n; i++)
        {
            sum ^= a[i];  
        }
        int XOR=sum;
        for(int i = 0; i < n; i++)
        {
            XOR= min(XOR, sum^a[i]);
        }
        cout<<XOR<<edl;
    }
    return 0;
}