#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t;
    cin>>t;
    while(t--){
        long long n,sum=0,f=0,c=0;
        cin>>n;
        vector<int>v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
            if(v[i]==-1)
            {
                c++;
            }
        }
 
        if(c>0)
        {
            for(int i=1;i<n;i++)
            {
                if(v[i-1]==-1 && v[i]==-1)
                {
                    v[i-1]=1;
                    v[i]=1;
                    break;
                }
            }
        }
        else{
            for(int i=1;i<n;i++)
            {
                if(v[i-1]==1 && v[i]==1)
                {
                    v[i-1]=-1;
                    v[i]=-1;
                    break;
                }
            
            }
        }
 
       for(int i=0;i<n;i++)
       {
        sum+=v[i];
       }
       cout<<sum<<endl;       
    }
}
