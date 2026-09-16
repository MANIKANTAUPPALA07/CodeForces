#include <bits/stdc++.h>
using namespace std;
 
int main(){
    string give;
    cin >> give;
    string a,b,c,d,e;
    cin >> a >> b >> c >> d >> e;
    bool isPass = false;
    if(a[0] == give[0] || a[1] == give[1]){
        isPass = true;
    }
    else if(b[0] == give[0] || b[1] == give[1]){
        isPass = true;
    }
    else if(c[0] == give[0] || c[1] == give[1]){
        isPass = true;
    }
    else if(d[0] == give[0] || d[1] == give[1]){
        isPass = true;
    }
    else if(e[0] == give[0] || e[1] == give[1]){
        isPass = true;
    }
 
    if(isPass){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
}