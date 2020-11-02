#include <bits/stdc++.h>
using namespace std;

#define lll int64_t
#define ll long long
#define ar array
#define mod 1000000007

const int mxN=2e5;
int n, a[mxN], k;

ll subsetsum(vector<ll> arr , ll range){
    bool dp[arr.size() + 1][range+1];
    for(int i = 0 ; i <= range ; ++i ){
        dp[0][i] = false;
    }
    for(int i = 0 ; i <= arr.size() ; ++i ){
        dp[i][0] = true;
    }
    for(int i = 1 ; i<=arr.size() ; ++i ){
        for(int j = 1; j <= range ; ++j){
            if(arr[i-1] <= j){
                dp[i][j] = dp[i-1][j - arr[i-1]] || dp[i-1][j];
            }
            else{
                dp[i][j] = dp[i-1][j];
            }
        }
    }
    vector<ll> arr2;
    for(int i = 0 ; i <= range/2 ; ++i ){
        if(dp[arr.size()][i]){
            arr2.emplace_back(i);
        }
    }
    ll mini = mxN;
    for(int i = 0 ; i < arr2.size() ; ++i ){
        mini = min(mini, range - (2*arr2[i]));
    }
    return mini;
}

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
    ll range = accumulate(arr.begin() , arr.end() , 0);
    ll res = subsetsum(arr,range);
    cout<<res<<endl;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	solve();
}