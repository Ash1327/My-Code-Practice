#include <iostream>
#include <string>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        string s;
        cin >> s;
        int f=0;
 
        for (int i = 1; i < s.length(); i++) {
            string a = s.substr(0, i);
            string b = s.substr(i);
 
 
            if (a[0] != '0' && b[0] != '0' && stoi(b) > stoi(a)) {
                f=1;
                cout << a << " " << b << endl;
                break;
            }
        }
        
 
        if(f==0)
        {
            cout << "-1" << endl;
        }
    }
 
    return 0;
}
