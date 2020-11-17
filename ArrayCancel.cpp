#include <bits/stdc++.h>
using namespace std;

#define lll int64_t
#define ll long long
#define ar array
#define mod 1000000007

const int mxN=2e5;
int n, a[mxN], k;

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
    ll i = 0 ; 
    ll j = 1 ;
    while(j < n){
        if(arr[i] > 0 && arr[j] < 0){
            ll temp = min(arr[i],abs(arr[j]));
            arr[i] -= temp;
            arr[j] += temp;
        }
        if(arr[i] <= 0){
            i += 1;
        }
        if(arr[j] >= 0){
            j += 1;
        }
        if(i >= j){
            j = i + 1;
        }
    }
    ll sum = 0;
    for(int i = 0 ; i < n ; ++i ){
        if(arr[i] > 0){
            sum += arr[i];
        }
    }
    cout<<sum<<endl;
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