#include<bits/stdc++.h>
#define ll long long
#define edl '\n'
using namespace std;
int max_power_two(int n)
{
    if(n<1) return 0;
    int second;
    for(int i=0; i<31; i++)
    {
        int cur=(1<<i);
        if(cur>n) break;
        second=cur;
    }
    return second;
}
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
        int second=max_power_two(n);
        int first= n-second;
        cout<<first<<" "<<second<<endl;
    }
    return 0;
}