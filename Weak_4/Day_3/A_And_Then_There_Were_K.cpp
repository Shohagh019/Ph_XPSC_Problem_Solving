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
        for(int i=31; i>=0; i--)
        {
            if(n&(1<<i))
            {
                cout<<(1<<i)-1<<endl;
                break;
            }
        }
    }
    return 0;
}