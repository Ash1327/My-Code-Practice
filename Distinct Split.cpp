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
        int m=0;
        unordered_map<char,int>m1,m2;
        for(auto i:s){
            m1[i]++;
        }
 
        for(auto i:s){
            m1[i]--;
            m2[i]++;
            if(m1[i]==0){
                m1.erase(i);
            }
            int d = m1.size()+m2.size();
            m = max(m,d);
        }
 
        cout<<m<<endl;
    }
}
