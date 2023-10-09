#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t;
    cin>>t;
    while(t--){
        string s1,s2;
        cin>>s1>>s2;
        int sum1=1,sum2=1;
        for(auto i:s1){
            if(i=='X'){
                sum1+=1;
            }
            else if(i=='L'){
                sum1*=3;
            }
            else if(i=='M'){
                sum1*=2;
            }
            else{
                sum1 *= -3;
            }
        }
        for(auto i:s2){
            if(i=='X'){
                sum2+=1;
            }
            else if(i=='L'){
                sum2*=3;
            }
            else if(i=='M'){
                sum2*=2;
            }
            else{
                sum2*=-3;
            }
        }
 
        if(sum1>sum2){
            cout<<">"<<endl;
        }
        else if(sum1<sum2){
            cout<<"<"<<endl;
        }
        else{
            cout<<"="<<endl;
        }
    }
}
