#include <bits/stdc++.h>
using namespace std;

#define lll int64_t
#define ll long long
#define ar array

const int mxN=2e5;
int n, a[mxN], k;

void solve() {
	//implementation goes here
    ll n, k , l;
    cin>>n>>k>>l;
    vector<ll> arr1,arr2;
    for(int i = 0 ; i < k ; ++i ){
        ll a;
        cin>>a;
        arr1.push_back(a);
    }
    for(int i = 0 ; i < l ; ++i){
        ll a;
        cin>>a;
        arr2.push_back(a);
    }
    if(find(arr1.begin() , arr1.end() , n) != arr1.end()){
        cout<<"YES"<<endl;
        return;
    }
    cout<<"NO"<<endl;
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

