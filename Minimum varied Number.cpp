#include<bits/stdc++.h>
using namespace std;
long long reverse(long long s){
    long long t=0,rem=0;
    while(s>0){
        t= s%10;
        rem = rem *10 + t;
        s=s/10;
    }
    return rem;
}
int main(){
    long long t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        long long s=0,i=9;
        while(n>0 && i>0){
            if(n-i>=0){
            s = s*10 + i;
            n = n-i;
            }
            i--;
        }
        s = reverse(s);
 
        cout<<s<<endl;
    }
}
