#include <bits/stdc++.h>
using namespace std;

#define lll int64_t
#define ll long long
#define ar array

const int mxN=2e5;
int n, a[mxN], k;

void solve() {
	//implementation goes here
    ll n;
    cin>>n;
    set<ll> arr;
    for(int i = 0 ; i < n ; ++i ){
        ll a;
        cin>>a;
        if(a > 0)
            arr.insert(a);
    }
    
    cout<<arr.size()<<endl;
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