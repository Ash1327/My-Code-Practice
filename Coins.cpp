#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t;
    cin>>t;
    while(t--){
        long long n,k;
        cin>>n>>k;
        int f=0;
        for(int i=0;i<3;i++){
            if(n - k *i >= 0 && (n- k*i)%2==0){
                f=1;
                break;
            }
        }
        if(f==1){
            cout<<"YES"<<endl;
        }
        else{
        cout<<"NO"<<endl;
        }
       
    }
}
