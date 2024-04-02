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
        string a,b;
        cin >> a >> b;
        int x1=0,x2=0;
        char c1,c2;
        int n=a.size();
        int m=b.size();
        for(int i=0;i<n;i++)
        {
            if(a[i]!='X')
            {
                c1=a[i];  
            }
            else
            {
               x1++; 
            }
        }
        for(int i=0;i<m;i++)
        {
            if(b[i]!='X')
            {
                c2=b[i];
            }
            else
            {
                x2++;
            }
        }
        if(c1==c2)
        {
            if(x1==x2 || c1=='M')
            {
                cout<<"="<<edl;
                continue;
            }
            if(c1=='S')
            {
                if(x1>x2)
                {
                    cout<<'<'<<edl;
                }
                else
                {
                    cout<<'>'<<edl;
                }
            }
            else if(c1=='L')
            {
                if(x1<x2)
                {
                    cout<<"<"<<edl;
                }
                else
                {
                    cout<<">"<<edl;
                }
            }
            continue;
        }
        if(c1=='S')
        {
            cout<<"<"<<edl;
        }
        else if(c1=='M' && c2=='S')
        {
            cout<<">"<<edl;
        }
        else if(c1=='M'&& c2=='L')
        {
            cout<<"<"<<edl;
        }
        else if(c1=='L')
        {
            cout<<">"<<edl;
        }
    }
    return 0;
}