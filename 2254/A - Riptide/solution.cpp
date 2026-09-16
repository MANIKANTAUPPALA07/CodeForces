#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin >> t;
    while(t--){
        int a,b,c;
        cin >> a >> b >> c;
        if(a == b || b == c || c == a){
            cout << 0 << endl;
        }
        else{
            cout << min(abs(a-b),min(abs(b-c),abs(c-a))) << endl;
        }
    }
}