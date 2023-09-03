#include<bits/stdc++.h>
using namespace std;
int main() {
    long long t;
    cin >> t;
    while (t--) 
    {
            long long n;
            cin>>n;
            vector<long long>v(n);
            for(int i=0;i<n;i++)
            {
                cin>>v[i];
            }
 
            vector<string>v1(n);
            long long k;
            for(int i=0;i<n;i++)
            {
                cin>>k>>v1[i];
            }
 
           for (int i = 0; i < n; i++) {
                long long ch = v[i]; 
                for (int j = 0; j < v1[i].length(); j++) {
                    if (v1[i][j] == 'D') {
                        ch += 1;
                        if (ch > 9) {
                            ch = 0;
                        }
                    } else {
                        ch -= 1;
                        if (ch < 0) {
                            ch = 9;
                        }
                    }
                }
            v[i] = ch; 
           }
 
 
        
 
 
            for(auto i:v){
                cout<<i<<" ";
            }
            cout<<endl;
 
 
 
 
    }
    return 0;
 
}
