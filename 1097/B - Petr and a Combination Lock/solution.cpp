#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int n;
    cin >> n;
    vector<int> nums(n);
 
    for(int i = 0;i < n;i++) cin >> nums[i];
 
    
    bool isNot = true;
    for(int i = 0;i < (1<<n);i++) {
        int sum = 0;
        for(int j = 0;j < n;j++) {
            if((i & (1<<j)) > 0) {
                sum -= nums[j];
            }
            else{
                sum += nums[j];
            }
        }
 
        if(sum % 360 == 0){
            cout << "YES" << endl;
            isNot = false;
            break;
        }
    }
 
    if(isNot) {
        cout << "NO" << endl;
    }
 
    // else{
    //     cout << "YES" << endl;
    // }
}