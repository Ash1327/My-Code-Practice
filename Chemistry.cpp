#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin>>t;
    while(t--)
    {
        long long n,k,c=0;
        cin>>n>>k;
        string s;
        cin>>s;
        map<long long,long long>m; 
        for(auto i:s)
        {
            m[i]++;
        }

        for(auto i:m)
        {
            if(i.second%2==1)
            {
                c++;
            }
        }
        if(c<= k+1)
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }

    }
}
