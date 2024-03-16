#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    bool freq[26]={false};
    for(int i=0; i<s.size();i++)
    {
        freq[s[i]-'a']=true;
    }
    bool flag= true;
    for(int i=0; i<26; i++)
    {
        if(freq[i]==false)
        {
            cout<<char(i+'a')<<endl;
            flag=false;
            break;
        }        
    }
    if(flag) cout<<"None"<<endl;
    return 0;
}