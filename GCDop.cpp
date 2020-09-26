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
    vector<ll> arr1,arr2;
    bool flag = false;
    for(int i = 0 ; i < n ; ++i ){
        ll a ;
        cin>>a;
        if(a != (i+1)){
            ll j = i + 1;
            ll g = __gcd(a,j);
            ll lcm = (a * j) / g;
            if(lcm != j){
                flag =true;
            }
        }
    }
    if(flag){
        cout<<"NO"<<endl;
        return;
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