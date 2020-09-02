#include <bits/stdc++.h>
using namespace std;

#define lll int64_t
#define ll long long
#define ar array

const int mxN=2e5;
int n, a[mxN], k;

ll calc(ll n , ll k){
    if(n == 1 && k == 1){
        return 0;
    }
    ll mid = n / 2;
    if(k <= mid){
        return calc(n-1 , k);
    }
    else{
        return !calc(n-1 , k - mid);
    }
}

void solve() {
	//implementation goes here
    ll n , k;
    cin>>n>>k;
    cout<<calc(n , k)<<endl;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t;
	cin >> t;
	for(int i=1; i<=t; ++i) {
		solve();
	}
}