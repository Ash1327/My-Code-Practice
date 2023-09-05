#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t;
    cin>>t;
    while(t--){
        long long n1,n2,c=0;
        cin>>n1>>n2;
        string s1,s2;
        cin>>s1>>s2;
 
        reverse(s2.begin(),s2.end());
        s1=s1+s2;
 
        for(int i=1;i<n1+n2;i++){
            if(s1[i]==s1[i-1]){
                c++;
            }
        }
 
        if(c<=1){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
 
    }
}
