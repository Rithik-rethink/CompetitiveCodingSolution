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
    int n ;
    cin>>n;
    string s = to_string(n);
    vector<int> dp(n+1);
    dp[0] = 0;
    int ans = INT_MAX;
    for(int i = 1 ; i <= n ; ++i ){
        ans = INT_MAX;
        s = to_string(i);
        for(int j = 0 ; j < s.size() ; ++j){
            int temp = s[j] - '0';
            if(temp == 0){
                continue;
            }
            ans = min(ans , dp[i-temp] + 1);
        }
        dp[i] = ans;
       
    }
    cout<<dp[n]<<endl;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	solve();
}