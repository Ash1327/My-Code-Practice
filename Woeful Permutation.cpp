#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        if(n%2==0){
            for(int i=1;i<=n;i++){
                if(i%2==0){
                    cout<<i-1<<" ";
                }
                else{
                    cout<<i+1<<" ";
                }
            }
        }
        else{
            cout<<1<<" ";
            for(int i=2;i<=n;i++){
                if(i%2==0){
                    cout<<i+1<<" ";
                }
                else{
                    cout<<i-1<<" ";
                }
            }
        }
        cout<<endl;
    }
}
