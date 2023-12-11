#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        vector<pair<int,char>>v,v1,v2;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='B' && i!=0)
            {
                if(!v.empty())
                {
                    v.pop_back();
                }
            }
           else if(s[i]>='A' && s[i]<='Z')
           {
            if(s[i]!='B')
            {
                v.push_back({i,s[i]});
            }
           }
 
           else if(s[i]=='b' && i!=0)
           {
            if(!v1.empty())
            {
                v1.pop_back();
            }
           }
           else
           {
            if(s[i]!='b')
            {
                v1.push_back({i,s[i]});
            }
           }
        }
        v2.insert(v2.end(), v.begin(), v.end());
        v2.insert(v2.end(), v1.begin(), v1.end());
        sort(v2.begin(),v2.end());
 
 
        for ( auto pair : v2)
        {
        cout << pair.second;
        }
        cout<<endl;
 
        
 
        
       
 
    }
}
