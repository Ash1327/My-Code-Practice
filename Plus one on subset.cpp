#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        int m1=INT_MAX,m2 = INT_MIN;
        vector<int>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
            m1 = min(m1,v[i]);
            m2 = max(m2,v[i]);
        }
        cout<<m2-m1<<endl;
    }
}
