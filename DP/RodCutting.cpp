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
    vector<ll> length , price;
    for(int i = 0 ; i < n ; ++i ){
        ll a;
        cin>>a;
        length.emplace_back(a);
    }
    for(int i = 0 ; i < n ; ++i ){
        ll a;
        cin>>a;
        price.emplace_back(a);
    }
    
    ll dp[length.size()+1][n+1];
    for(int i = 0 ; i <= length.size() ;++i ){
        dp[i][0] = 0;
    }
    for(int i = 0 ; i<= n ; ++i ){
        dp[0][i] = 0;
    }
    for(int i = 1 ; i <= length.size() ; ++i ){
        for(int j = 1; j <= n ; ++j ){
            if(length[i-1] <= j){
                dp[i][j] = max(price[i-1] + dp[i][j-length[i-1]],dp[i-1][j]);
            }
            else{
                dp[i][j] = dp[i-1][j];
            }
        }
    }
    cout<<dp[length.size()][n]<<endl;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
    solve();
}