#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int a,b,c;
        cin >> a >> b >> c;
        int mini = min(a , min(b,c));
        cout << n - mini << endl;
    }
}