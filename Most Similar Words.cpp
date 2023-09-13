#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
    long long t;
    cin >> t;
    
    while (t--) {
       long long n,l;
       cin>>n>>l;
       vector<string>v(n);

       for(int i=0;i<n;i++){
        cin>>v[i];
       }
       int ans = 0,sum=10000;
       for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
        ans=0;
            for(int k=0;k<l;k++){
                ans += abs(v[i][k] - v[j][k]);
            }
        if(ans<sum){
            sum = ans;
        }
        }

       }

       cout<<sum<<endl;
       
       
    }
    
    return 0;
}
