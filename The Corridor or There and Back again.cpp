#include <bits/stdc++.h>
using namespace std;
int main() {
    long long t;
    cin >> t;
    while (t--) {
        long long n,a,b,ans=LLONG_MAX;
        cin>>n;
        while(n--){
            cin>>a>>b;
            ans = min(ans,((b-1)/2) + a);
        }
        cout<<ans<<endl;  
    }
    return 0;
}
