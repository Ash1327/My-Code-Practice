#include<bits/stdc++.h>
using namespace std;
long long fact(long long n1){
    long long f=1;
    while(n1>0){
        f=f*n1;
        n1--;
    }
    return f;
}
int main(){
    long long t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        vector<int>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        long long d = 10 - n;
        long long f = fact(d);
        long long f1 = fact(d-2);
        long long f2 = 0;
        f2 = (f/(2*f1));
 
        cout<<(f2*6)<<endl;
    }
}
