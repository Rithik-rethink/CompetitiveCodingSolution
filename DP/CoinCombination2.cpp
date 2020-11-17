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
    int n , k;
    cin>>n>>k;
    vector<int> arr;
    for(int i = 0 ; i < n ; ++i ){
        int a;
        cin>>a;
        arr.emplace_back(a);
    }
    vector<vector<int>> dp(n+1 , vector<int> (k+1));
    for(int i = 0 ; i <= k ; ++i ){
        dp[0][i] = 0;
    }
    for(int i = 0 ; i <= n ; ++i ){
        dp[i][0] = 1;
    }
    for(int i = 1 ; i <= n ; ++i ){
        for(int j = 1 ; j <= k ; ++j){
            if(arr[i-1] <= j){
                dp[i][j] = dp[i][j-arr[i-1]] + dp[i-1][j];
            }
            else{
                dp[i][j] = dp[i-1][j];
            }
            dp[i][j] = dp[i][j] % mod;
        }
    }
    cout<<dp[n][k]<<endl;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	solve();
}