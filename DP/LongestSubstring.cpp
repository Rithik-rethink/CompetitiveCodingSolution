#include <bits/stdc++.h>
using namespace std;

#define lll int64_t
#define ll long long
#define ar array

const int mxN=2e5;
int n, a[mxN], k;

void solve() {
	//implementation goes here
    string s, t;
    cin>>s>>t;
    ll dp[s.size()][t.size()];
    memset(dp,0,sizeof(dp));
    for(int i = 1 ; i <= s.size() ; ++i ){
        for(int j = 1; j <= t.size() ; ++j ){
            if(s[i-1] == t[j-1]){
                dp[i][j] = 1 + dp[i-1][j-1];
            }
            else{
                dp[i][j] = 0;
            }
            
        }
    }
    ll res= 0;
    for(int i = 0 ; i <= s.size() ; ++i ){
        for(int j = 0; j <= t.size() ; ++j ){
            res = max(res,dp[i][j]);
            
        }
    }
    cout<<res<<endl;
    
    
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	solve();
}