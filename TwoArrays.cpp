#include <bits/stdc++.h>
using namespace std;

#define lll int64_t
#define ll long long
#define ar array

const int mxN=2e5;
int n, a[mxN], k;

void solve() {
	//implementation goes here
	ll n , t;
	cin>>n>>t;
	vector<ll> arr , arr1;
	map<ll , ll> mp , mp1 , mp2;
	mp[1] = 0;
	mp[0] = 0;
	string s ="";
	for(int i = 0 ; i < n ; ++i ){
		ll a;
		cin>>a;
		ll temp = t - a;
		if(mp1[temp] != 1){
			arr.emplace_back(a);
			mp1[a] = 1;
			s += "0";
		}
		else if(mp2[temp] != 1){
			arr1.emplace_back(a);
			mp2[a] = 1;
			s += "1";
		}
		else if(mp[0] <= mp[1]){
			arr.emplace_back(a);
			mp[0] += 1;
			mp1[a] = 1;
			s += "0";
		}
		else if(mp[0] > mp[1]){
			arr1.emplace_back(a);
			mp[1] += 1;
			mp2[a] = 1;
			s += "1";
		}
		s += " ";
	}
	s.pop_back();
	cout<<s<<endl;



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