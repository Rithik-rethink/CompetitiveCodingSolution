#include <bits/stdc++.h>
using namespace std;

#define lll int64_t
#define ll long long
#define ar array

const int mxN=2e5;
int n, a[mxN], k;


void solve() {
	//implementation goes here
    ll n , k;
    cin>>n>>k;
    vector<ll> arr;
    for(int i = 0 ; i < n ; ++i){
        ll a;
        cin>>a;
        arr.push_back(a);
    }
    sort(arr.begin() , arr.end());
    ll res = 0;
    for(int i = 0 ; i < n; ++i){
        if(arr[i] > k){
            break;
        }        
        k -= arr[i];
        res += 1;
    }
    cout<<res<<endl;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t;
	cin >> t;
	for(int i=1; i<=t; ++i) {
		cout << "Case #" << i << ": ";
		solve();
	}
}