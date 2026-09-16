#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        int count = 0;
        int maxi = INT_MIN;
        for(int i = 0;i < n;i++){
            
            if(s[i] == '#'){
                count++;
            }
            else{
                count = 0;
            }
 
            maxi = max(maxi , count);
        }
 
        cout << ceil((double)maxi / 2) << endl;
 
        
    }
 
    return 0;
}