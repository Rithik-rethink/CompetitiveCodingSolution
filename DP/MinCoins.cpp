#include <bits/stdc++.h>
using namespace std;

#define lll int64_t
#define ll long long
#define ar array

const int mxN=2e5;
int n, a[mxN], k;

ll dp[101];

ll mini(vector<ll> arr , ll n , ll x , ll cnt){
    if(n <= 0){
        if(n == 0){
            return cnt;
        }
        return 0;
    }
    

}

void solve() {
	//implementation goes here
    ll n , x;
    cin>>n>>x;
    memset(dp , 0 , n+1);
    vector<ll> arr;
    for(int i = 0 ; i < n ; ++i ){
        ll a;
        cin>>a;
        dp[a] = 1;
        arr.emplace_back(a);
    }
    ll cnt = 0;
    ll result = mini(arr , n , x, cnt);
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	solve();
}