#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t;
    cin>>t;
    while(t--){
        long long n,odd=0,even=0;
        cin>>n;
        vector<int>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
            if(v[i]%2==1){
                odd++;
            }else{
                even++;
            }
        }

        if(odd==v.size()){
            cout<<0<<endl;
        }
        else if(even>odd){
            cout<<odd<<endl;
        }
        else {
            cout<<even<<endl;
        }

        

    }
}
