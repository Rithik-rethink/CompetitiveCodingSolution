#include <bits/stdc++.h>
using namespace std;

#define lll int64_t
#define ll long long
#define ar array

const int mxN=2e5;
int n, a[mxN], k;

void solve() {
	//implementation goes here
    ll n , x;
    cin>>n>>x;
    map<ll,string > mp;
    vector<ll> arr;
    for(int i = 0 ; i < n  ; ++i ){
        ll a;
        cin>>a;
        ll temp = a / x;
        if(a % x != 0){
            mp[temp + 1] += (to_string(i + 1));
            mp[temp + 1] += " ";
        }
        else{
            mp[temp] += (to_string(i+1));
            mp[temp] += " ";
        }
    }
    string res = "";
    for(auto itr = mp.begin() ; itr!=mp.end() ; ++itr){
        res += itr->second;
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
		cout << "Case #" << i << ": ";
		solve();
	}
}