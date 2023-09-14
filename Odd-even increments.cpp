#include<bits/stdc++.h>
using namespace std;
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
        bool p = true;
        for(int i=2;i<n;i++){
            if(v[i]%2!=v[i-2]%2){
                p=false;
            }
        }
 
        if(p){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}
