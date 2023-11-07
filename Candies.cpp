#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        int i=2;
        int p = pow(2,i);
        p-=1;
        if(n%p==0)
        {
            cout<<n/p<<endl;
        }
        else
        {
            while(n%p!=0)
            {
                p = pow(2,i);
                p-=1;
                if(n%p==0)
                {
                    cout<< (n/p) <<endl;
                    break;
                }
                i++;
            }
        }
    }
}
