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
    map<ll,ll> mp;
    for(int i = 0 ; i < n ; ++i ){
        ll a;
        cin>>a;
        arr.emplace_back(a);
        mp[a] += 1;
    }
    for(auto itr = mp.begin() ; itr!=mp.end() ; ++itr){
        if(itr->second >= 3){
            cout<<"YES"<<endl;
            return;
        }
    }
    auto it = mp.find(arr[0]);
    if(arr[0] != arr[1] && it->second > 1){
        cout<<"YES"<<endl;
        return;
    }
    for(int i = 1 ; i < n - 1 ; ++i){
        auto itr = mp.find(arr[i]);
        if(arr[i] != arr[i+1] && itr->second > 1 && arr[i] != arr[i-1]){
            cout<<"YES"<<endl;
            return;
        }
        else if(arr[i-1] == arr[i+1]){
            cout<<"YES"<<endl;
            return;
        }
        
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