#include <bits/stdc++.h>
using namespace std;
 
#define lll int64_t
#define ll long long
#define ar array
#define mod 1000000007
 
const int mxN=2e5;
int n, a[mxN], k;
 
void solve() {
	//implementation goes here
    ll n , k;
    cin>>n>>k;
    vector<ll> arr;
    for(int i = 0 ; i < n ; ++i ) {
        ll a;
        cin>>a;
        arr.emplace_back(a);
    }
    vector<ll> dp(k+1);
    dp[0] = 1;
    for(int i = 1 ; i <= k ; ++i ){
        dp[i] = 0;
        for(int j = 0 ; j < n ; ++j ){
            if(arr[j] <= i){
                dp[i] += dp[i-arr[j]];
                dp[i] = dp[i] % mod;
            }
        }
    }
    cout<<dp[k]<<endl;
 
}
 
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
 
	solve();
}