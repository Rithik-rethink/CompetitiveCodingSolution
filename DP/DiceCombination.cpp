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
    ll n;
    cin>>n;
    vector<ll> arr;
    for(int i = 1 ; i<= 6 ; ++i ){
        arr.emplace_back(i);
    }
    ll dp[7][n+1];
    for(int i = 0 ; i<=n ; ++i ){
        dp[0][i] = 0;
    }
    for(int i = 0 ; i<=6 ; ++i ){
        dp[i][0] = 1;
    }
    for(int i = 1 ; i <= 6 ; ++i ){
        for(int j = 1 ; j <= n ; ++j ){
            if(arr[i-1] <= j){
                dp[i][j] = dp[i][j-arr[i-1]] + dp[i-1][j];
            }
            else{
                dp[i][j] = dp[i-1][j];
            }
        }

    }
    cout<<dp[6][n]<<endl;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	solve();
}