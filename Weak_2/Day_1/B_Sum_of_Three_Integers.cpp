// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);
//     int k,s;
//     cin>>k>>s;
//     int count=0; 
//     for(int i=0; i<=k; i++)
//     {
//         for(int j=0; j<=k; j++)
//         {
//             for(int l=0; l<=k; l++)
//             {
//                 if(i+j+l==s)
//                 {
//                     count++;
//                 }
//             }
//         }
//     }
//     cout<<count<<endl;
//     return 0;
// }
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int k,s;
    cin>>k>>s;
    int count=0; 
    for(int i=0; i<=k; i++)
    {
        for(int j=0; j<=k; j++)
        {
            int l=s-(i+j);
            if(l>=0 && l<=k)count++;
        }
    }
    cout<<count<<endl;
    return 0;
}

