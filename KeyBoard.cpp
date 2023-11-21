#include<bits/stdc++.h>
using namespace std;
int main()
{
    char ch;
    cin>>ch;
 
    string s,k="";
    cin>>s;
 
    string t = "qwertyuiopasdfghjkl;zxcvbnm,./";
 
    if(ch=='R')
    {
        for(int i=0;i<s.length();i++)
        {
            int r = t.find(s[i]);
            k += t[r-1];
        }
    }
    else
    {
        for(int i=0;i<s.length();i++)
        {
            int l = t.find(s[i]);
            k+=t[l+1];
        }
    }
 
    cout<<k<<endl;
}
