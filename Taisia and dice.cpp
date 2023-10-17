#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t;
    cin>>t;
    while(t--)
    {
        long long n,a,b;
        cin>>n>>a>>b;
        cout<<a-b<<" ";
       int x = b/(n-1);
       int rem = b % (n-1);
 
       for(int i=0;i<n-1;i++){
        if(rem>0){
            cout<<x+1<<" ";
        }
        else{
            cout<<x<<" ";
        }
        rem--;
       }
       cout<<endl;
 
    }
}
