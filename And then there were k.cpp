#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
             int n;
             cin>>n;
             int k=0;int l=1;
             while(true)
             {
                if((1<<k)<=n&&(1<<l)>n)
                {
                     cout<<(1<<k)-1<<endl;
                     break;
                }
                k++;l++;
             }

    }
}
