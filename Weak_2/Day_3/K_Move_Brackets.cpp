#include<bits/stdc++.h>
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
        string s;
        cin >> s;
        int count_1 = 0,count_2 = 0;
        for(char c:s)
        {
            if(c=='(')
            {
                count_1++;
            }
            else
            {
                if(count_1 >0)
                {
                    count_1--;
                }
                else
                {
                    count_2++;
                }
            }
        }
        cout<<count_1<<'\n';

    }
    return 0;
}