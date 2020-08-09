#include <bits/stdc++.h>
using namespace std;

#define lll __int64
#define ll long long
#define ar array

const int mxN=2e5;
int n, a[mxN], k;

void solve() {
	//implentation goes here
    ll n , p;
    cin>>n>>p;
    vector<ll> arr;
    for(int i = 0 ; i <  n ; ++i){
        ll a;
        cin>>a;
        arr.push_back(a);
    }
    ll steps = -1;
    for(int i = 0 ; i < n ; ++i){
        if(p % arr[i] == 0){
            ll f = p / arr[i];
            if(f < steps || steps == -1){
                steps = arr[i];
            }
        }
    }
    cout<<steps<<endl;
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