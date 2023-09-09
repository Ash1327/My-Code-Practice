#include<iostream>
using namespace std;
int main(){
    long long t;
    cin>>t;
    while(t--){
        long long n,s=0;
        cin>>n;
 
       while(n>0){
        s+=n;
        n/=2;
       }
       cout<<s<<endl;
    }
}
