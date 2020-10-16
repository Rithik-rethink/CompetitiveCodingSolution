#include <bits/stdc++.h>
using namespace std;

#define lll int64_t
#define ll long long
#define ar array

const int mxN=2e5;
int n, a[mxN], k;

ll dp[1000][1000];
ll knapsack(vector<ll> arr , ll sum , ll n){
    if(n == 0 || sum == 0){
        return 0;
    }
    if(dp[n][sum]!= -1){
        return dp[n][sum];
    }
    if(arr[n-1] <= sum){
        return max(arr[n-1] + knapsack(arr, sum - arr[n-1] , n-1) , knapsack(arr,sum,n-1));
    }
    else{
        return knapsack(arr,sum ,n-1);
    }
}

void solve() {
	//implementation goes here
    ll n;
    cin>>n;
    ll sum ;
    memset(dp,-1,sizeof(dp));
    cin>>sum;
    vector<ll> arr;
    for(int i = 0 ; i < n ; ++i ){
        ll a;
        cin>>a;
        arr.emplace_back(a);
    }
    ll result = knapsack(arr , sum , n);
    if(result == sum){
        cout<<"YES"<<endl;
        return;
    }
    else{
        cout<<"NO"<<endl;
    }
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	solve();
}