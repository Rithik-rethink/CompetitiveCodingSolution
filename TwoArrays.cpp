#include <bits/stdc++.h>
using namespace std;

#define lll int64_t
#define ll long long
#define ar array

const int mxN=2e5;
int n, a[mxN], k;

void solve() {
	//implementation goes here
    ll n, t;
	cin>>n>>t;
	vector<ll> arr;
	map<ll,ll> mp;
	for(int i = 0 ; i < n ; ++i ){
		ll a;
		cin>>a;
		arr.emplace_back(a);
		mp[a] = i;
	}
	vector<ll> white,black,white1;
	for(int i = 0 ; i < n ; ++i ){
		ll temp = abs(t - arr[i]);
		if(find(white1.begin() , white1.end() , temp) == white1.end()){
			white.emplace_back(i);
			white1.emplace_back(arr[i]);
		}
		else{
			black.emplace_back(i);
		}
	}
	string res = "";
	for(int i = 0 ; i < n ;++i ){
		if(find(white.begin() , white.end() , i) != white.end()){
			
			res += to_string(0);
			res += " ";
		}
		else{
			res += to_string(1);
			res += " ";
		}
	}
	res.pop_back();
	cout<<res<<endl;
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