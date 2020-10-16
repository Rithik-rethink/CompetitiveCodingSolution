#include <bits/stdc++.h>
using namespace std;

#define lll int64_t
#define ll long long
#define ar array

const int mxN=2e5;
int n, a[mxN], k;

void solve() {
	//implementation goes here
    ll n;
    cin>>n;
    ll sum ;
    cin>>sum;
    vector<ll> arr;
    for(int i = 0 ; i < n ; ++i ){
        ll a;
        cin>>a;
        arr.emplace_back(a);
    }
    bool dp[n+1][sum+1];
    for(int i = 0 ; i <= n ; ++i ){
        dp[i][0] = true;
    }
    for(int i = 1 ; i <= sum ; ++i ){
        dp[0][i] = false;
    }
    for(int i = 1 ; i <= n ; ++i ){
        for(int j = 1; j <= sum ; ++j ){
            if(arr[i-1] <= j){
                dp[i][j] = dp[i-1][j-arr[i-1]] || dp[i-1][j];
            }
            else{
                dp[i][j] = dp[i-1][j];
            }
        }
    }
    if(dp[n][sum]){
        cout<<"YES"<<endl;
        return;
    }
    cout<<"NO"<<endl;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	solve();
}