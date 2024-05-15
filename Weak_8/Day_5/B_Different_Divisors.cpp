#include<bits/stdc++.h>
#define ll long long
#define edl '\n'
using namespace std;
bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i <= sqrt(num); ++i) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)
    {
        int d;
        cin >> d;
        int ans1, ans2;
        int x=1+d;
        while(true)
        {
            if(isPrime(x))
            {
                ans1 = x;
                break;
            }
            x++;
        }
        x+=d;
        while(true)
        {
            if(isPrime(x))
            {
                ans2 = x;
                break;
            }
            x++;
        }
        cout<<ans1*ans2<<endl;
    }
    return 0;
}