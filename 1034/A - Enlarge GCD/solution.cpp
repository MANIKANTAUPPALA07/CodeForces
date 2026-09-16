#include <bits/stdc++.h>
using namespace std;
 
const int maxi = 15000001;
vector<int> Fac(maxi);
 
void Sieve(){
    for(int i = 0;i < maxi;i++) Fac[i] = i;
 
    for(int i = 2;i*i <= maxi;i++) {
        if(Fac[i] == i) {
            for(int j = i*i;j <= maxi;j+=i) {
                Fac[j] = i;
            }
        }
    }
}
 
int GCD(int a,int b) {
    if(b == 0) return a;
 
    return GCD(b , a%b);
}
 
int main() {
 
    Sieve();
 
    int n;
    cin >> n;
    vector<int> nums(n);
    int ans = 0;
    int mx = 0;
 
    for(int i = 0;i < n;i++) {
        cin >> nums[i];
        ans = GCD(ans, nums[i]);
    }
 
    // cout << ans << endl;
    for(int i = 0;i < n;i++) {
        nums[i] /= ans;
    }
 
    map<int ,int > mpp;
    for(int i = 0;i < n;i++) {
 
        while(nums[i] > 1) {
            int p = Fac[nums[i]];
            mpp[p]++;
 
            while(nums[i] % p == 0) {
                nums[i] /= p;
            }
        }
    }
 
    for(auto &it : mpp) {
        mx = max(mx, it.second);
    }
 
    if(mx == 0) cout << -1 << endl;
    else cout << n - mx << endl;
}