#include <bits/stdc++.h>
using namespace std;

#define lll int64_t
#define ll long long
#define ar array

const int mxN=2e5;
int n, a[mxN], k;


void solve() {
	//implementation goes here
    string s,t;
    cin>>s>>t;
    vector<vector<ll>> dp(s.size()+1 , vector<ll> (t.size()+1));
    for(int i = 0 ; i <= s.size() ; ++i ){
        dp[i][0] = 0;
    }
    for(int i = 0 ; i <= t.size() ; ++i ){
        dp[0][i] = 0;
    }
    for(int i = 1 ; i <= s.size() ; ++i ){
        for(int j = 1 ; j <= t.size() ; ++j ){
            if(s[i-1] == t[j-1]){
                dp[i][j] = dp[i-1][j-1] + 1;

            }
            else{
                dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
            }

        }
    }
    ll i = s.size() , j = t.size() ; 
    string res = "";
    while(i != 0 || j != 0){
        if(s[i-1] == t[j-1]){
            res += s[i-1];
            i -= 1;
            j -=1 ; 
        }
        else{
            if(dp[i-1][j] > dp[i][j-1]){
                i -= 1;
                continue;
            }
            else{
                j -=1 ;
                continue;
            }
        }
    }
    reverse(res.begin() , res.end());
    cout<<res<<endl;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	solve();
}