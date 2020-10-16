#include <bits/stdc++.h>
using namespace std;

#define lll int64_t
#define ll long long
#define ar array

const int mxN=2e5;
int n, a[mxN], k;

void solve() {
	//implementation goes here
    ll n , k , x, y;
    cin>>n>>k>>x>>y;
    map<ll,ll> arr;
    
    while(arr.size() != n){
        if(x == y){
            cout<<"YES"<<endl;
            return;
        }
        if(arr.find(x) != arr.end() ){
            cout<<"NO"<<endl;
            return;
        }
        arr[x] = x-1;
        x = (x + k) % n;
    }
    cout<<"YES"<<endl;
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