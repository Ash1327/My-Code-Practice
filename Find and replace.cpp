#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        string s,s1="",s2="";
        cin>>s;
        for(int i=0;i<n;i++){
            if(i%2==0){
                s2+='0';
            }
            else{
                s2+='1';
            }
        }
        map<char,char>m;
        for(int i=0;i<s.length();i++){
            if(m.find(s[i])==m.end() && i%2==0){
                m[s[i]]='0';
            }
            else if(m.find(s[i])==m.end() && i%2==1){
                m[s[i]]='1';
            }
        }
 
        for(int i=0;i<s.length();i++){
            s1+=m[s[i]];
        }
        if(s1==s2){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
 
    }
}
