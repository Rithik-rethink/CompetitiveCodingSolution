#include <bits/stdc++.h>
using namespace std;

#define lll int64_t
#define ll long long
#define ar array

const int mxN=2e5;
int n, a[mxN], k;

void solve() {
	//implementation goes here
    ll n ;
    cin>>n;
    map<char,ll> mp;
    for(int i = 0 ; i < n ; ++i ){
        string s;
        cin>>s;
        for(int i = 0 ; i < s.size() ; ++i){
            mp[s[i]] += 1;
        }
    }
    for(auto itr = mp.begin() ; itr!=mp.end() ; ++itr){
        if(itr->second % n != 0){
            cout<<"NO"<<endl;
            return;
        }
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