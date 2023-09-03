#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t;
    cin>>t;
    while(t--){
       long long a1,b1,a2,a3,b2,b3;
       cin>>a1>>b1>>a2>>b2>>a3>>b3;
       long long ans=1,m1=0,m2=0;
       if(a1<a2 && a1<a3){
        m1 = min(abs(a1-a2),abs(a1-a3));
       }
 
       if(b1<b2 && b1<b3){
        m2 = min(abs(b1-b2),abs(b1-b3));
       }
 
       if(a1>a2 && a1>a3){
        m1 = min(abs(a1-a2),abs(a1-a3));
       }
 
       if(b1>b2 && b1>b3){
        m2 = min(abs(b1-b2),abs(b1-b3));
       }
 
       
       ans = ans + m1+m2;
       cout<<ans<<endl;
 
       
    }
    return 0;
}
