#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<long long> nums(n);
        for(int i = 0;i < n;i++){
            cin >> nums[i];
        }
 
        bool isPoss = true;
        for(int i = 0;i < n - 1;i++){
                if(i == 0){
                    long long move = (nums[i] - 1);
                    nums[i] = 1;
                    nums[i + 1] += move;
                }
                else{
                    long long need = (nums[i - 1] + 1);
                    
                    if(nums[i] < need){
                        isPoss = false;
                        break;
                    }
 
                    long long move = nums[i] - need;
                    nums[i] = need;
                    nums[i + 1] += move;
                }
                
            }
 
        if (isPoss && n > 1 && nums[n - 2] >= nums[n - 1])
            isPoss = false;
 
 
        if(isPoss){
            cout << "Yes" << endl;
        }
        else{
            cout << "No" << endl;
        }
    }
}