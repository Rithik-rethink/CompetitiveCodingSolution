#include <bits/stdc++.h>
using namespace std;

#define lll int64_t
#define ll long long
#define ar array

const int mxN=2e5;
int n, a[mxN], k;

ll knapsack(vector<ll> w , vector<ll> v , ll W , ll n){
    if(n == 0 || W == 0){
        return 0;
    }
    if(w[n-1] <= W){
        return max(v[n-1] + knapsack(w,v,W-w[n-1] , n-1) ,knapsack(w,v,W,n-1) );
    }
    else{
        return knapsack(w,v,W,n-1);
    }
}

void solve() {
	//implementation goes here
    ll n;
    cin>>n;
    vector<ll> w , v ;
    ll W ;
    for(int i = 0 ; i < n ; ++i ){
        ll a;
        cin>>a;
        w.emplace_back(a);
    }
    for(int i = 0 ; i < n ; ++i ){
        ll a;
        cin>>a;
        v.emplace_back(a);
    }
    cin>>W;
    ll profit = knapsack(w,v,W,n);
    cout<<profit<<endl;

}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	solve();
}