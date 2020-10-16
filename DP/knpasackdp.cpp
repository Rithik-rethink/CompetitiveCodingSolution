#include <bits/stdc++.h>
using namespace std;

#define lll int64_t
#define ll long long
#define ar array

const int mxN=2e5;
int n, a[mxN], k;

ll t[102][1002];

ll knapsack(vector<ll> val , vector<ll> w , ll W , ll n){
    if(n == 0 || W == 0){
        return 0;
    }
    if(t[W][n] != -1 ){
        return t[W][n];
    }
    if(w[n-1] <= W){
        return t[W][n] = max(val[n-1] + knapsack(val , w , W - w[n-1] , n-1) ,knapsack(val , w , W , n-1) );
    }
    else{
        return t[W][n] = knapsack(val , w , W, n-1);
    }
}

void solve() {
	//implementation goes here
    ll n , W ;
    cin>>n>>W;
    vector<ll> val,w;
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
    memset(t , -1 , sizeof(t));
    ll res = knapsack(val , w , W , n);
    cout<<res<<endl;

}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	solve();
}