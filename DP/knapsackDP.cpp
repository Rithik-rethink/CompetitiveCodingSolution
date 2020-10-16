#include <bits/stdc++.h>
using namespace std;

#define lll int64_t
#define ll long long
#define ar array

const int mxN=2e5;
int n, a[mxN], k;



void solve() {
	//implementation goes here
    ll n , W;
    cin>>n>>W;
    ll dp[n+1][W+1];

    vector<ll> val , w;
    for(int i = 0 ; i < n ; ++i ){
        ll a;
        cin>>a;
        val.emplace_back(a);
    }
    for(int i = 0 ; i < n ; ++i ){
        ll a;
        cin>>a;
        w.emplace_back(a);
    }
    for(int i = 0 ; i < W ; ++i ){
        dp[0][i] = 0;
    }
    for(int i = 0 ; i < n ; ++i ){
        dp[i][0] = 0;
    }
    for(int i = 1 ; i <= n ; ++i ){
        for(int j = 1 ; j <= W ; ++j ){
            if(w[i-1] <= j){
                dp[i][j] = max(val[i-1] + dp[i-1][j-w[i-1]],dp[i-1][j]);
            }
            else{
                dp[i][j] = dp[i-1][j];
            }
        }
    }
    cout<<dp[n][W]<<endl;


}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	solve();
}