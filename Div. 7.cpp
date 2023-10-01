#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        if(n%7==0){
            cout<<n<<endl;
        }
        else{
            long long k = n%7;
            if((n-k)%7 == 0 && (n-k)>10 ){
                long long n1 = n-k;
                long long n2 = n1+7,c1=0,c2=0;
 
                string s = to_string(n), s1 = to_string(n1),s2 = to_string(n2);
                for(int i=0;i<s.length();i++){
                    if(s[i]!=s1[i]){
                        c1++;
                    }
                    if(s[i]!=s2[i]){
                    c2++;
                    }
                }
                if(c1>c2){
                    cout<<n2<<endl;
                }
                else{
                    cout<<n1<<endl;
                }
                
            }
            else if((n-k)%7==0 && (n-k)<10){
                cout<<14<<endl;
            }
            else{
                cout<<n+k<<endl;
            }
        }
    }
}
