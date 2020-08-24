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
    vector<ll> arr;
    for(int i = 0 ; i < n ; ++i){
        ll a;
        cin>>a;
        arr.push_back(a);
    }
    for(int i = 0 ; i < n ; ++i){
        if(arr[i] % 2 == 0){
            cout<<1<<endl;
            cout<<i+1<<endl;
            return;
        }
        if(i > 0 && arr[i] % 2 != 0 && arr[i-1] % 2 != 0){
            cout<<2<<endl;
            cout<<i<<" "<<i+1<<endl;
            return;
        }
    }
    cout<<-1<<endl;
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