#include<bits/stdc++.h>
using namespace std;
 
int main() {
    long long t;
    cin >> t;
    while (t--) {
        long long n, k;
        cin >> n >> k;
        vector<pair<int,int>> v1(n); 
        
        vector<int>v2(n), ans(n);
 
        for (int i = 0; i < n; i++) {
            cin >> v1[i].first;
            v1[i].second = i;
        }
        for (int i = 0; i < n; i++) {
            cin >> v2[i];
        }
        sort(v2.begin(),v2.end());
        sort(v1.begin(),v1.end());
        for(int i=0;i<n;i++){
            ans[v1[i].second] = v2[i];
        }
 
 
        for (auto i : ans) {
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}
