#include <bits/stdc++.h>
using namespace std;

#define lll int64_t
#define ll long long
#define ar array

const int mxN=2e5;
int n, a[mxN], k;

void solve() {
	//implementation goes here
    ll n,k;
    cin>>n>>k;
    vector<ll> arr;
    for(int i = 0 ; i < n ; ++i ){
        ll a;
        cin>>a;
        arr.emplace_back(a);
    }
    sort(arr.begin() , arr.end() );
    ll sum = 0;
    for(int i = 0 ; i < n - 1 ; ++i ){
        sum = accumulate(arr.begin() + i , arr.end() , 0);
        sum /= (n - i);
        if(sum >= k){
            cout<<n-i<<endl;
            return;
        }
    }
    if(arr[n-1] >= k){
        cout<<1<<endl;
        return;
    } 
    cout<<0<<endl;
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