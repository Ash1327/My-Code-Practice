#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        string s;
        cin>>s;
        long long i=0,j=1;
        while(i<n){
            while(s[i]!=s[j]){
                j++;
            }
            cout<<s[i];
            i=j+1;
            j=i+1;
        }
        cout<<endl;
 
 
    }
}
