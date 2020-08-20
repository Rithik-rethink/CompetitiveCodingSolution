#include <bits/stdc++.h>
using namespace std;

#define lll __int64
#define ll long long
#define ar array

const int mxN=2e5;
int n, a[mxN], k;

void solve() {
	//implementation goes here
    ll n ;
    cin>>n;
    vector<ll> arr;
    for(int i = 0 ; i < 2*n ; ++i){
        ll a;
        cin>>a;
        arr.push_back(a);
    }
    sort(arr.begin(),arr.end());
    ll maxi = 0;
    for(int i = 0 ; i < 2*n - 1 ; i++){
        if((arr[i+1] - arr[i]) > maxi){
            maxi = arr[i+1] - arr[i];
        }
    }
    cout<<maxi<<endl;
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