#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
 
        map<string,int>m;
        m["00"] = m["01"] = m["10"] = m["11"] = 1e9;
        for(int i=0;i<n;i++){
            int k;
            cin>>k;
            string s;
            cin>>s;
            m[s] = min(m[s],k);
        }
        if(min(m["11"],m["10"]+m["01"])>1e6){
            cout<<"-1"<<endl;
        }
        else{
            cout<<min(m["11"],m["10"]+m["01"])<<endl;
        }
    }
}
