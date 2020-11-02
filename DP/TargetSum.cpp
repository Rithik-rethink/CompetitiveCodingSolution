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
    for(int i = 0 ; i < n ; ++i ){
        ll a;
        cin>>a;
        arr.emplace_back(a);
    }
    ll diff ;
    cin>>diff;
    ll sum = accumulate(arr.begin() , arr.end() , 0);
    ll to_find = diff + sum;
    if(to_find & 1){
        cout<<0<<endl;
        return;
    }
    to_find /= 2;
    sum = to_find;
    ll dp[n+1][sum+1];
    for(int i = 0 ; i<= sum ; ++i ){
        dp[0][i] = 0;
    }
    for(int i = 0 ; i <= n ;++i){
        dp[i][0] = 1;
    }
    for(int i = 1 ; i <= n ; ++i ){
        for(int j = 1 ; j <= sum ; ++j ){
            if(arr[i-1] <= j){
                dp[i][j] = dp[i-1][j-arr[i-1]] + dp[i-1][j];
            }
            else{
                dp[i][j] = dp[i-1][j];
            }
        }
    }
    cout<<dp[n][sum]<<endl;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	solve();
}